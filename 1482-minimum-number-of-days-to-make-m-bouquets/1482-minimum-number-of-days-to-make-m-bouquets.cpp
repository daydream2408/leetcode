class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int low=0;
        int high=0;
       // int boq=0;
        int ans=-1;

        if(((long long )m*k)>arr.size()) return -1;

        for(int i:arr){
            high=max(high,i);
            low=min(low,i);
        }

        while(low<=high){
            int mid=(low+high)/2;
            int boq=0;
            int count=0;
            for(int i=0; i<arr.size(); i++){

                // if(count==k) {
                //     boq++;
                //     count=0;
                // }
                if(arr[i]<=mid) count++;
                else  {
                    boq+=  count/k;
                    count =0;}
            }
            boq+=count/k;

            if(boq<m) low=mid+1;
            else {
                ans = mid;
                high = mid-1;

            }
        }
        return ans;
    }
};