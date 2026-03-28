class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
  int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        int sum=0;
        vector<vector<int>> visited(n, vector<int>(m, -1));
        vector<int> dr = {-1, 0, 1, 0};
        vector<int> dc = {0, 1, 0, -1};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                queue<pair<int, int>> q;
                if (grid[i][j] !=0 && visited[i][j]==-1) {
                    visited[i][j] = 1;
                    q.push({i, j});
                     sum=0;
                    while (!q.empty()) {
                        auto it = q.front();
                        q.pop();
                        int r = it.first;
                        int c = it.second;
                        sum=(sum+grid[r][c])%k;
                        for (int i = 0; i < 4; i++) {
                            int nr = r + dr[i];
                            int nc = c + dc[i];

                            if (nr >= 0 && nc >= 0 && nr < n && nc < m &&
                                visited[nr][nc] == -1 && grid[nr][nc] !=0) {
                                visited[nr][nc] = 1;
                                q.push({nr, nc});
                            }
                        }
                    }
                    if(sum%k==0)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};