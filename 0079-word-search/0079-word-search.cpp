class Solution {
public:
    bool s=false;
    void search(int start,int end,vector<vector<char>>& board,string target,string temp,int row,int col,vector<vector<int>>& vis)
    {
        if(s)
        {
            return;
        }
        if(start<0 || end<0  || start>=row || end>=col)
        {
                return;
        }
        temp+=board[start][end];
        vis[start][end]=0;
        if(temp==target)
        {
            s=true;
            return;
        }
        if(temp.size()>=target.size() && temp!=target)
        {
            vis[start][end]=-1;
            return;
        }

        if(target.substr(0, temp.size()) != temp)
            {
                vis[start][end]=-1;
                return;
            }
        //for travelling left side
        if(end-1>=0 && vis[start][end-1]==-1)
        {
            search(start,end-1,board,target,temp,row,col,vis);
        }
        //for traveling down
        if(end+1<col && vis[start][end+1]==-1)
        {
            search(start,end+1,board,target,temp,row,col,vis);
        }
        //for traveling right side
        if(start+1<row && vis[start+1][end]==-1)
        {
            search(start+1,end,board,target,temp,row,col,vis);
        }

        //for travelling up
        if(start-1>=0 && vis[start-1][end]==-1)
        {
            search(start-1,end,board,target,temp,row,col,vis);
        }

        vis[start][end]=-1;



    }
    bool exist(vector<vector<char>>& board, string word) {

        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,-1));
        for(int i=0;i<board.size();i++)
        {

                for(int j=0;j<board[i].size();j++)
                {
                        
                        search(i,j,board,word,"",n,m,visited);
                        if(s==true)
                        {
                            return true;
                        }
                }

        }
        return false;
    }
};