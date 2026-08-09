class Solution {
public:
    int maxScore(vector<int>& n, int k) {
        int left_sum=0;
        int right_sum=0;
        int right_index= n.size()-1;
        int maxsum=0;

           for(int i=0; i<k; i++){
            left_sum+=n[i];
            maxsum = max(left_sum,maxsum);
           }
            
           for(int i=k-1; i>=0; i--){
            left_sum -= n[i];
            right_sum += n[right_index];
            maxsum = max(maxsum, (left_sum + right_sum));
            right_index--;
           }
           return maxsum;
    }
};