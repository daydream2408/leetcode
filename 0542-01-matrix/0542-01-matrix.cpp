class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dis(n,vector<int>(m,0));

        queue<pair<pair<int,int>,int>>q;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==0) {
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }
        int dr[]={1,0,0,-1};
        int dc[]={0,-1,1,0};

      while(!q.empty()){
        int row = q.front().first.first;
        int col = q.front().first.second;
        int dist= q.front().second;
        q.pop();
         dis[row][col]=dist;

         for(int i=0; i<4; i++){
            int nr = row+dr[i];
            int nc = col +dc[i];
     
            if(nr<n && nr>=0&& 
               nc<m && nc>=0 && vis[nr][nc]==0){
                vis[nr][nc]=1;
                
                //dis[nr][nc]=dist+1;
                q.push({{nr,nc},dist+1});
               }
         }
      }








return dis;
    }
};