class Solution {
public:


    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) {
        int n=grid.size();
        int m=grid[0].size();

       vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        vis[sr][sc]=1;
        int tocolor=grid[sr][sc];
        grid[sr][sc]=color;

        while(!q.empty()){
            int r=q.front().first;
            int c = q.front().second;
            q.pop();

            int dr[]={1,-1,0,0};
            int dc[]={0,0,-1,1};

            for(int i=0; i<4; i++){
                int nr=r+dr[i];
                int nc=c+dc[i];

                if(nr<n &&nr>=0 &&
                nc<m&& nc>=0&&
                grid[nr][nc]==tocolor && vis[nr][nc]==0){
                    vis[nr][nc]=1;
                    grid[nr][nc]=color;
                    q.push({nr,nc});
                }
            }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m;j++){
        //         if(grid[])
        //     }
        // }
        }
        return grid;
    }
};