class Solution {
public:
    void sortColors(vector<int>& nums) {
        map <int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        for(int i=0; i<mpp[0]; i++) nums[i]=0;
        for(int i=mpp[0]; i<mpp[0]+mpp[1]; i++) nums[i]=1;
        for(int i=mpp[1]+mpp[0]; i<mpp[0]+mpp[1]+mpp[2]; i++) nums[i]=2;
    }
};