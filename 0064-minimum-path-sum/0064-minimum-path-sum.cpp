class Solution {
public:
    int solve(int start,int end,vector<vector<int>>& grid,vector<vector<int>>& dp,int r,int c)
    {
        if(start>=r || end >= c)
        {
            return 1e9;
        }

        if(start==r-1 && end==c-1)
        {
            return grid[start][end];
        }
        if(dp[start][end]!=1e9)
        {
            return dp[start][end];
        }

        int right=solve(start,end+1,grid,dp,r,c);
        int down=solve(start+1,end,grid,dp,r,c);

        return dp[start][end]=min((grid[start][end]+right),(grid[start][end]+down));
    }



    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),1e9));
        return solve(0,0,grid,dp,r,c);
    }
};