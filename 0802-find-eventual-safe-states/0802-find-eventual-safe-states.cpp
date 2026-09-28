class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n= graph.size();
       vector<vector<int>>adj(n);
        vector<int>ans;

        vector<int>indegree(n);

       for(int it=0; it<n; it++){
         for(auto i: graph[it]){
            adj[i].push_back(it);
            indegree[it]++;
         }
       }
        
        queue<int>q;

       for(int j=0; j<n;j++){
        if(indegree[j]==0)q.push(j);
       }

       while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(auto neigh: adj[node]){
            indegree[neigh]--;
            if(indegree[neigh]==0) q.push(neigh);

        }
        
       }
       sort(ans.begin(),ans.end());
       return ans;

    }
};