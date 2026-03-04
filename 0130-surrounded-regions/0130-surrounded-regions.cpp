class Solution {
public:
    void solve(vector<vector<char>>& board) {
        queue<pair<int,int>> q;
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O' && ( j==0 || j==m-1 || i==0 || i==n-1))
                {
                    q.push({i,j});
                    board[i][j]='#';
                }
            }
        }
        vector<int> dr={-1,0,1,0};
        vector<int> dc={0,1,0,-1};
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int r=it.first;
            int c=it.second;
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];

                if(nc>=0 && nc<m && nr>=0 && nr<n && board[nr][nc]=='O')
                {
                    board[nr][nc]='#';
                    q.push({nr,nc});
                }
            }

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='#')
                {
                    board[i][j]='O';
                }
                else if(board[i][j]=='O')
                {
                    board[i][j]='X';
                }
            }
        }
    }
};