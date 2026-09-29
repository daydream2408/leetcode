class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if (grid[0][0] == 1)
            return -1;

        int n = grid.size();

        vector<vector<int>> vis(n, vector<int>(n, 0));
        int count = 1;
        queue<pair<pair<int, int>,int>> q;
        q.push({{0, 0},1});

  int dr[] = {-1,-1,-1,0,0,1,1,1};
        int dc[] = {-1,0,1,-1,1,-1,0,1};

        while (!q.empty()) {

            int row = q.front().first.first;
            int col = q.front().first.second;
            int step = q.front().second;
            if (row==n - 1&&col==n - 1)
                return q.front().second;
            q.pop();
                  grid[row][col] = 1;
          

            for (int i = 0; i < 8; i++) {
                int r = row + dr[i];
                int c = col + dc[i];

                if (r < n && r >= 0 && c < n && c >= 0 && grid[r][c] == 0 &&
                    vis[r][c] == 0) {
                    q.push({{r, c},step+1});
                    vis[r][c] = 1;
                   // flag = true;
                }
            }
           
        }
       
        return -1;
    }
};