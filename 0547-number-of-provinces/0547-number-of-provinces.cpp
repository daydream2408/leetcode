class Solution {
public:
    int findCircleNum(vector<vector<int>>& mat) {
        int n=mat.size();

        //create adjecency list
        vector<vector<int>> adj(n + 1);
        for(int i=0; i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1&& i!=j){
                    adj[i].push_back(j);
                   // adj[j].push_back(i);
                }
            }
        }
          vector<int> vis(n,0);
         // vis[1]=1;
         
           int count=0;

         for (int i = 0; i < n; i++) {

    if (!vis[i]) {

        count++;

        queue<int> q;
        q.push(i);
        vis[i] = 1;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            for (auto neighbour : adj[node]) {

                if (!vis[neighbour]) {
                    vis[neighbour] = 1;
                    q.push(neighbour);
                }
            }
        }
    }
}
        return count;
    }
};