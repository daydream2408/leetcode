class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
          int n= nums.size();
        vector<int>premax(n);
        vector<int>sufmin(n);
          int maxnum=nums[0];
          int minnum=nums[n-1];
        for(int i=0; i<n; i++){
            maxnum=max(nums[i],maxnum);
            premax[i]=maxnum;

            minnum=min(minnum,nums[n-i-1]);
            sufmin[n-i-1]=minnum;
        }
           int stable=-1;
        for(int i=0; i<n; i++){
         int instable=premax[i]-sufmin[i];
         if(instable<=k){
            stable=i;
            break;
         }
        }
        return stable;
    }
};