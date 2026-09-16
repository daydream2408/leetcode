class Solution {
public:
    int numEnclaves(vector<vector<int>>& board) {
         int n = board.size();
        int m = board[0].size();
         int count=0;
        queue<pair<int, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 1));

        // check if any 'O' is at edge
        //  push it in queue
        //  then all the 'O' adjesent will not change

        for (int i = 0; i < m; i++) {
            if (board[0][i] == 1) {
                q.push({0, i});
                vis[0][i] = 0;
            }
            if (board[n - 1][i] == 1) {
                q.push({n - 1, i});
                vis[n - 1][i] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            if (board[i][0] == 1) {
                q.push({i, 0});
                vis[i][0] = 0;
            }

            if (board[i][m - 1] == 1) {
                q.push({i, m - 1});
                vis[i][m - 1];
            }
        }

  int dr[] = {0, 1, 0, -1};
        int dc[] = {1, 0, -1, 0};

        while (!q.empty()) {

            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            vis[row][col] = 0;
           // count++;

            for (int i = 0; i < 4; i++) {
                int r = row + dr[i];
                int c = col + dc[i];
                if (r < n && r >= 0 && c < m && c >= 0 && vis[r][c] == 1 &&
                    board[r][c] == 1) 
                    {
                        vis[r][c]=0;
                        q.push({r,c});
                }
            }
        }
         for(int i=0; i<n; i++){
            for(int j=0; j<m ; j++){
                if(board[i][j]==1 && vis[i][j]==1) count++;
            }
         }
         return count;
    }
};