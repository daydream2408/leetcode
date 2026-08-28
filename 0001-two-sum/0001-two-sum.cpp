class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0;i<nums.size(); i++){
             int diff = target-nums[i];
             if(map.count(diff)){
                 ans.push_back(i);
                 ans.push_back(map[diff]);
                 break;
             }
             map[nums[i]]=i;
        }
        return ans;
    }
};