class Solution {
public:
    void rotate(vector<int>& nums, int d) {
        int n = nums.size();
      //  d= d%n;
        d = d % n;

        vector<int> temp;

        for(int i=n-1; i>=n-d; i--){
            temp.push_back(nums[i]);
        }

        for(int i=n-d-1; i>=0; i--){
             nums[i+d]=nums[i];
        }

        for(int i=d-1; i>=0; i--){
            nums[i]=temp[d-i-1];
        }
        //  for (int i = 0; i < d; i++) {
        //     nums[i] = temp[i];
        // }

    }
};