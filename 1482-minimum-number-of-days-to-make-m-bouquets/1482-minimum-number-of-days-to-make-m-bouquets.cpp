class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        if((long long ) m*k>nums.size()) return -1;

      int high=0;
      int low=INT_MAX;
      for(int i: nums){
        high=max(high,i);
        low=min(low,i);
      }
      int ans=0;

      while(low<=high){

        int mid=(low+high)/2;

            int flowers=0;
            int boque=0;

        for(int i=0; i<nums.size(); i++){

            if(mid>=nums[i]){
                flowers++;

            if(flowers==k){
                boque++;
                flowers=0;
            }

            }
            else flowers=0;
        }

        if(boque>=m){
            ans=mid;
            high=mid-1;
        }

        else low=mid+1;
      }
      return ans;
    }
};