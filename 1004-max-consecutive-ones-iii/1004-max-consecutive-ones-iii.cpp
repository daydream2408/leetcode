class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int zero=0;
        int len=0;
     // unordered_map<int,int>mp;

        while(r<nums.size()){
          if( nums[r]==0){
            zero++;
          }
           
            if(zero>k){
                if(nums[l]==0) zero--;
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};