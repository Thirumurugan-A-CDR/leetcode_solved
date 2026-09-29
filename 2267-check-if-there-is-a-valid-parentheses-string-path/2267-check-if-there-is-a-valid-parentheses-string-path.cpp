class Solution {
public:
    bool yes = false;

    vector<vector<vector<bool>>> dp;

    void func(vector<vector<char>>& grid, int row, int col,
              int leftcount, int rightcount)
    {
        if(row >= grid.size() || col >= grid[0].size())
        {
            return;
        }

        if(grid[row][col] == '(')
            leftcount++;

        if(grid[row][col] == ')')
            rightcount++;

        if(leftcount < rightcount)
        {
            return;
        }

        if(row == grid.size()-1 && col == grid[0].size()-1)
        {
            if(leftcount == rightcount)
            {
                yes = true;
            }

            return;
        }

        if(yes)
        {
            return;
        }

        if(dp[row][col][leftcount] == true)
        {
            return;
        }

        dp[row][col][leftcount] = true;

        func(grid, row, col+1, leftcount, rightcount);
        func(grid, row+1, col, leftcount, rightcount);
    }

    bool hasValidPath(vector<vector<char>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        if((n+m-1)%2 != 0 ||
           grid[0][0] == ')' ||
           grid[n-1][m-1] == '(')
        {
            return false;
        }

        dp.resize(n, vector<vector<bool>>(
            m,
            vector<bool>(n+m, false)
        ));

        func(grid, 0, 0, 0, 0);

        return yes;
    }
};