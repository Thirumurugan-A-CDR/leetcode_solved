class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {
        int r = coins.size();
        int c = coins[0].size();

        vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(3, -1e9)));

        
        for(int k = 0; k <= 2; k++) {
            if(coins[r-1][c-1] < 0 && k > 0)
                dp[r-1][c-1][k] = 0;
            else
                dp[r-1][c-1][k] = coins[r-1][c-1];
        }


        for(int i = r-1; i >= 0; i--) {
            for(int j = c-1; j >= 0; j--) {

                if(i == r-1 && j == c-1) continue;

                for(int k = 0; k <= 2; k++) {

                    int ans = -1e9;

                    if(j+1 < c) {
                        ans = max(ans, coins[i][j] + dp[i][j+1][k]);
                    }

                   
                    if(i+1 < r) {
                        ans = max(ans, coins[i][j] + dp[i+1][j][k]);
                    }

                    if(coins[i][j] < 0 && k > 0) {
                        if(j+1 < c)
                            ans = max(ans, dp[i][j+1][k-1]);
                        if(i+1 < r)
                            ans = max(ans, dp[i+1][j][k-1]);
                    }

                    dp[i][j][k] = ans;
                }
            }
        }

        return dp[0][0][2];
    }
};