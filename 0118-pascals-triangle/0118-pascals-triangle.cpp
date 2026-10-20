class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>anse;

        for(int i=1; i<=n; i++){
           vector<int>temp;
           int ans=1;
              temp.push_back(ans);
           
            for(int c=1; c<i; c++){
                ans*=i-c;
                ans=ans/c;
              temp.push_back(ans);

            }
            anse.push_back(temp);
        }
        return anse;
    }
};