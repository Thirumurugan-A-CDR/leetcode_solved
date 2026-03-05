class Solution {
public:
int func(int start,int end,vector<vector<int>>& tri,vector<vector<int>>& dp)
{
    int n=tri.size();
    if(start==n-1)
    {
        return tri[start][end];
    }


    if(start>=n)
    {
        return 1e9;
    }

    if(dp[start][end]!=1e9)
    {
        return dp[start][end];
    }


    int bottom=func(start+1,end,tri,dp);
    int e=func(start+1,end+1,tri,dp);


    return dp[start][end]=min(bottom,e)+tri[start][end];


}
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(500,vector<int>(500,1e9));
        return func(0,0,triangle,dp);
    }
};