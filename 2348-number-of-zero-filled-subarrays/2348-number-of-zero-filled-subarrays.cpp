class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        long long sum=0;
        for(auto i : nums){
            if(i ==0){
                count++;
                sum=sum+count;
            }
            else{
                count=0;
            }
        }
        return sum;
    }
};