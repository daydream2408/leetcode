class Solution {
public:
    bool dfs(int node, vector<int>& vis, vector<int>& pathvis,
             vector<vector<int>>& adj, vector<int>& check) {
        vis[node] = 1;
        pathvis[node] = 1;
        // check[node]=0

        for (auto neighbour : adj[node]) {
            if (!vis[neighbour]) {
                if (dfs(neighbour, vis, pathvis, adj,check))
                    return true;
            } else if (pathvis[neighbour])
                return true;

        }
            check[node] = 1;
            pathvis[node] = 0;
            return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> adj(n);
        vector<int> vis(n, 0);
        vector<int> pathvis(n, 0);
        vector<int> check(n, 0);

        for (int i = 0; i < n; i++) {
            for (auto it : graph[i]) {
                adj[i].push_back(it);
            }
        }

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, vis, pathvis, adj,check);
            }
        }
           vector<int>ans;
        for (int i = 0; i < n; i++) {
            if (check[i] == 1)
                ans.push_back(i);
        }
        return ans;
    }
};