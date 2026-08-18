class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high =0;
        int low=1;
        for(int i: nums){
            high = max(high,i);
        }

        int ans;

        while(low<=high){
            int mid = (low+high)/2;

              long long sum=0;
              for(int i=0; i<nums.size(); i++){
                sum += ceil((double)nums[i]/mid);
              }
              
              if(sum<=threshold) {
                ans = mid;
                high=mid-1;

              }
              else low=mid+1;

        }
        return ans;
    }
};