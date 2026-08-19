class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int sum=k;
        for(int i:arr){
            if(i<=sum){
                  sum+=1;
            }
            else break;
        }
        return sum;
    }
};