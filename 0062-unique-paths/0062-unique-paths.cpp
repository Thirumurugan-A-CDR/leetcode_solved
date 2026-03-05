class Solution {
public:
    int func(int start,int end,int n,int m,vector<vector<int>>& vis)
    {

        if(start>=n || end>=m)
        {
            return 0;
        }

        if(start==n-1 && end==m-1)
        {
            return 1;
        }

        if(vis[start][end]!=-1)
        {
            return vis[start][end];
        }

        int right=func(start,end+1,n,m,vis);
        int bottom=func(start+1,end,n,m,vis);

        return vis[start][end]=right+bottom;
    }



    int uniquePaths(int m, int n) {
        vector<vector<int>> visited(m,vector<int>(n,-1));
        return func(0,0,m,n,visited);
    }
};