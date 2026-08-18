class Solution {
public:
int check(vector<int> &nums, int mid, int n){
    int weight=0;
    int day=1;
    for(int i=0; i<n; i++){
        if(weight + nums[i]>mid){
              day++;
              weight=nums[i];
        }
        else weight+=nums[i];
    }
    return day;
}
    int shipWithinDays(vector<int>& nums, int days) {
        int high=0;
        int low=0;
        int ans=0;
        int n= nums.size();
        for(int i: nums ){
            high += i;
            low=max(low,i);
        }
        
        while(low<=high)
        {
            int mid= (low+high)/2;

            int day= check(nums,mid,n);

            if(day<=days) {
                ans=mid;
                high = mid-1;
            }
            else low= mid+1;
        }
        return ans;
    }
};