class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        arr1.push_back(nums[0]);
       
        vector<int>arr2;
        arr2.push_back(nums[1]);

          int i=2;
          int a1=0;
          int a2=0;
          while(i<nums.size()){
            if(arr1[a1]>arr2[a2]){
                 arr1.push_back(nums[i]);
                 a1++;
            }
            else {
                arr2.push_back(nums[i]);
                a2++;
            }
            i++;
          }
        //if(arr1[0]>arr2[0])
        
            for(int i=0; i<arr2.size();i++){
                arr1.push_back(arr2[i]);
            }
            return arr1;
        
        // for(int i=0; i<arr1.size();i++){
        //     arr2.push_back(arr1[i]);
        // }
        // return arr2;
    }
};