class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store;
         int ans=0;
        for(int i:nums){
            store.insert(i);
        }

        for(auto i: store){
          
          if(store.find(i-1)==store.end()){
            int count =1;
            int x=i;

            while(store.find(x+1)!=store.end()){
                count++;
                x++;
            }
            ans=max(ans,count);
          }
            

        }
        return ans;
    }
};