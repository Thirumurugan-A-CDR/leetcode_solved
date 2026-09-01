class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int m = classroom.size();
        int n = classroom[0].size();


        int sr = 0, sc = 0;
        int litterCount = 0;

        vector<vector<int>> litterIndex(m, vector<int>(n, -1));

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {

                if (classroom[r][c] == 'S') {
                    sr = r;
                    sc = c;
                }

                if (classroom[r][c] == 'L') {
                    litterIndex[r][c] = litterCount++;
                }
            }
        }
        if (litterCount == 0)
            return 0;

        int target = (1 << litterCount) - 1;

        vector<vector<vector<vector<bool>>>> visited(
            m,
            vector<vector<vector<bool>>>(
                n,
                vector<vector<bool>>(
                    energy + 1,
                    vector<bool>(1 << litterCount, false)
                )
            )
        );


        queue<array<int, 4>> q;

        q.push({sr, sc, energy, 0});
        visited[sr][sc][energy][0] = true;

        int moves = 0;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {

            int size = q.size();

            while (size--) {

                auto [r, c, currEnergy, mask] = q.front();
                q.pop();


                if (mask == target)
                    return moves;

                if (currEnergy == 0)
                    continue;

                for (int d = 0; d < 4; d++) {

                    int nr = r + dr[d];
                    int nc = c + dc[d];

                    if (nr < 0 || nr >= m ||
                        nc < 0 || nc >= n)
                        continue;


                    if (classroom[nr][nc] == 'X')
                        continue;


                    int newEnergy = currEnergy - 1;

                    if (classroom[nr][nc] == 'R') {
                        newEnergy = energy;
                    }

    
                    int newMask = mask;

                    if (classroom[nr][nc] == 'L') {
                        int id = litterIndex[nr][nc];
                        newMask |= (1 << id);
                    }

                 
                    if (visited[nr][nc][newEnergy][newMask])
                        continue;

                    visited[nr][nc][newEnergy][newMask] = true;

                    q.push({
                        nr,
                        nc,
                        newEnergy,
                        newMask
                    });
                }
            }

            moves++;
        }

        return -1;
    }
};