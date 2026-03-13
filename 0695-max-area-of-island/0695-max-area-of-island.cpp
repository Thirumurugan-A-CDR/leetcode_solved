class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        queue<pair<int,int>> q;

        vector<vector<int>> visited(n,vector<int>(m,-1));
        vector<int> dr={-1,0,1,0};
        vector<int> dc={0,1,0,-1};
        int island=0;
        int maxarea=0;
        for(int i=0;i<n;i++)
        {
                    for(int j=0;j<m;j++)
                    {
                            if(grid[i][j]==1 && visited[i][j]==-1)
                            {
                                        q.push({i,j});
                                        visited[i][j]=1;
                                        int count=1;
                                        while(!q.empty())
                                        {
                                            
                                            auto it=q.front();
                                            q.pop();
                                            int r=it.first;
                                            int c=it.second;

                                            for(int k=0;k<4;k++)
                                            {
                                                int nr=r+dr[k];
                                                int nc=c+dc[k];

                                                if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc]==1 && visited[nr][nc]==-1)
                                                {
                                                    visited[nr][nc]=1;
                                                    q.push({nr,nc});
                                                    count++;
                                                }
                                            }
                                        }
                                        maxarea=max(maxarea,count);
                            }
                    }
        }
        return maxarea;
    }
};