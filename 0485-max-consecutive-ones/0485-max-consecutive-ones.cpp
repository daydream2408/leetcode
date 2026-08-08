class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int i:nums){
            if(i!=1){
                ans=max(ans,count);
                count=0;
            }
            else{
                count++;
            }
        }
        return max(ans,count);
    }
};