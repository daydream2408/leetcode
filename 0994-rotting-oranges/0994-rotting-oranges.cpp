class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        queue<pair<int, int>> q;
        int fresh = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                   
                }
                if(grid[i][j]==1)fresh++;
            }
        }

        while (!q.empty() && fresh > 0) {

            int times = q.size();
            bool flag = false;
            int dr[] = {1, 0, -1, 0};
            int dc[] = {0, -1, 0, 1};

            for (int i = 0; i < times; i++) {

                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                for (int i = 0; i < 4; i++) {
                    int r = row + dr[i];
                    int c = col + dc[i];

                    if (r >= 0 && r < n && c >= 0 && c < m && grid[r][c] == 1) {
                        grid[r][c] = 2;
                        q.push({r, c});
                        flag = true;
                        fresh--;
                    }
                }
            }
            count++;
        }
        if (fresh > 0)
            return -1;
        return count;
    }
};