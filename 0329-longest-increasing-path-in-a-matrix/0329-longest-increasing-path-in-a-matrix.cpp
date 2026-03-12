class Solution {
public:
int func(int r,int c,vector<vector<int>>& matrix,int start,int end,vector<vector<int>>& vis)
{
    if(vis[start][end]!=-1e9)
    {
        return vis[start][end];
    }
    int leftmin=1;
    int rightmin=1;
    int upmin=1;
    int downmin=1;

//moving left
    if(end-1>=0 && matrix[start][end]<matrix[start][end-1])
    {
        leftmin=max(leftmin,1+func(r,c,matrix,start,end-1,vis));
    }

//moving right
    if(end+1<c && matrix[start][end]<matrix[start][end+1])
    {
     rightmin=max(rightmin,1+func(r,c,matrix,start,end+1,vis));
    }
//moving up 
    if(start-1>=0 && matrix[start][end]<matrix[start-1][end])
    {
     upmin=max(upmin,1+func(r,c,matrix,start-1,end,vis));
    }
//moving down
    if(start+1<r && matrix[start][end]<matrix[start+1][end])
    {
       downmin=max(downmin,1+func(r,c,matrix,start+1,end,vis));
    }


    return vis[start][end]=max({leftmin,rightmin,upmin,downmin});


}



    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxi=INT_MIN;
        vector<vector<int>> vis(n,vector<int>(m,-1e9));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                maxi=max(maxi,func(n,m,matrix,i,j,vis));
            }
        }
        return maxi;
    }
};