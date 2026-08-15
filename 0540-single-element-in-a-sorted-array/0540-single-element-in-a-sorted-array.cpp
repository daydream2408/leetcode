class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=1;
        int high=nums.size()-2;
       // int ans=0;
        if(nums.size()==1)return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[high]!=nums[high+1]) return nums[high+1];


        while(low<=high){
            int mid=(low+high)/2;

            if(nums[mid]!=nums[mid+1]&&nums[mid-1]!=nums[mid]) return nums[mid];

             else if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) ||
            (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
            // Move to the right half
            low = mid + 1;
        }
        // If mid is in the right half (pairing broken earlier)
        else {
            // Move to the left half
            high = mid - 1;
        }

            
        }
        return -1;
    }
};