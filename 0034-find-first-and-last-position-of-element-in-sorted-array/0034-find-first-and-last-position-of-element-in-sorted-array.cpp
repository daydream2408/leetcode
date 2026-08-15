class Solution {
public:
int firstindex(vector<int>&nums, int target, int n){
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            first=mid;
            high=mid-1;

        }

        else if(nums[mid]>target){
            high=mid-1;
        }
        else low=mid+1;
    }
    return first;
}
int lastindex(vector<int>&nums, int target, int n){
    int low=0;
    int high=n-1;
    int last=-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            last=mid;
            low=mid+1;

        }

        else if(nums[mid]>target){
            high=mid-1;
        }
        else low=mid+1;
    }
    return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first =firstindex(nums,target,nums.size());
        int last =lastindex(nums,target,nums.size());
         return {first,last};
        
    }
};