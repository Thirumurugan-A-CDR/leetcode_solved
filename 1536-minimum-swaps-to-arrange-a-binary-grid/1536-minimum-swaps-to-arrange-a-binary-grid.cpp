class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> last1;
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            int maxj = -1;
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) maxj = j;
            }
            last1.push_back(maxj);
        }

        for (int i = 0; i < n; i++) {
            int j = i;
            while (j < n && last1[j] > i) j++;

            if (j == n) return -1;

            while (j > i) {
                swap(last1[j], last1[j - 1]);
                swaps++;
                j--;
            }
        }

        return swaps;
    }
};