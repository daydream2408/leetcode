class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high =piles[0];
        int low=1;
      //  int arr[4];
        for(int i: piles){
            high=max(high,i);
            //low=min(low,i);
        }

      int ans=high;

        while(low<=high){
            int mid=(low+high)/2;

            long long count=0;
            for(int i=0; i<piles.size(); i++){
                 

                     count += ((long long )piles[i] + mid - 1) / mid;
                    
                      
                 
            }

           
             if(count<=h){
                ans=mid;
                high=mid-1;
               
            }
            else low=mid+1;
        }
        return ans;
    }
};