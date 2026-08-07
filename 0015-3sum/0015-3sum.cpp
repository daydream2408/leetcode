class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        int sum=0;
         vector<vector<int>> ans;

         for(int x=0; x<nums.size()-2; x++){
             if(x>0 && nums[x]==nums[x-1])continue;

                int y=x+1;
        int z=nums.size()-1;
       while(y<z)
       {
        
           sum = nums[x]+nums[y]+nums[z];

           if(sum == 0)
           {
            ans.push_back({nums[x],nums[y],nums[z]});
           
                   while(y<z && nums[y]==nums[y+1])y++;
                   while(z>y && nums[z]==nums[z-1])z--;
                   y++;
                   z--;
           }
           else if(sum<0){
              y++;
              }        

              else{
                z--;
              }
     
            }
        
        
         }
    return ans;
    }
};