class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int sell =0;
        for(int i =1; i<prices.size(); i++){
           // int purchase=0;
           
            if(prices[i-1]<prices[i]){
             // purchase=price[i-1];
              sell= sell+(prices[i]-prices[i-1]);
            }
        }
  return sell ; }
};