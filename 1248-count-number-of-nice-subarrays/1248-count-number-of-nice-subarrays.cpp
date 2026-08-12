class Solution {
public:
    int check(vector<int> nums, int goal){
        int l=0;
        int r=0;
        int sum=0;
        int count =0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>goal){
                sum -= nums[l];
                l++;
            }
            count += r-l+1;
            r++;

        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0) nums[i]=0;
            else nums[i]=1;
        }
        return(check(nums,k)-check(nums,k-1));
    }
};