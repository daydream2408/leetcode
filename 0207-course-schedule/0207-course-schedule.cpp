class Solution {
public:
  bool dfs(int node, vector<int>&vis, vector<int>&pathvis, vector<vector<int>>&adj){
    vis[node]=1;
    pathvis[node]=1;
    
    for(auto it : adj[node]){
        if(!vis[it]){
            if(dfs(it,vis,pathvis,adj)==true) return true;
        }
        else if(pathvis[it]) return true;
    }



    pathvis[node]=0;
    return false;
}

    bool canFinish(int n, vector<vector<int>>& p) {
          vector<vector<int>>adj(n);

       for(auto it:p ){
        adj[it[1]].push_back(it[0]);
       }

       vector<int>vis(n);
       vector<int>pathvis(n);

       for(int i=0; i<n ;i++){
        if(!vis[i]){
            if(dfs(i,vis,pathvis,adj)==true) return false;
        }
       }
       return true;
    }
};