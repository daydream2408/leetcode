class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int ans=0;
        for(int i: nums){
            mpp[i]++;
            if(mpp[i]>(nums.size()/2)) ans= i;
        }
        return ans;
    }
};