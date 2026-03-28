class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;

        vector<vector<char>> vis(n, vector<char>(m, 0));
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(grid[i][j] != 0 && !vis[i][j]) {

                    queue<pair<int,int>> q;
                    q.emplace(i, j);
                    vis[i][j] = 1;

                    int sum = 0;

                    while(!q.empty()) {
                        auto [r, c] = q.front();
                        q.pop();

                        sum += grid[r][c];
                        if(sum >= k) sum %= k;

                        for(int d = 0; d < 4; d++) {
                            int nr = r + dr[d];
                            int nc = c + dc[d];

                            if(nr >= 0 && nc >= 0 && nr < n && nc < m &&
                               !vis[nr][nc] && grid[nr][nc] != 0) {

                                vis[nr][nc] = 1;
                                q.emplace(nr, nc);
                            }
                        }
                    }

                    if(sum % k == 0) count++;
                }
            }
        }
        return count;
    }
};