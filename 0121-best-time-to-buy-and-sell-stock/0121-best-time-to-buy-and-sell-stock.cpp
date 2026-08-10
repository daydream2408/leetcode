class Solution {
public:
    int maxProfit(vector<int>&n) {
        int buy=n[0];
        int sell=0;

        for(int i=0; i<n.size();i++){
            buy=min(buy,n[i]);
            if(n[i]>buy){
                sell=max(sell,n[i]-buy);
            }
        }
        return sell;
    }
};