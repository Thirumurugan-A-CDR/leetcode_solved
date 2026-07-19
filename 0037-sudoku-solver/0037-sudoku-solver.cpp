class Solution {
public:
   bool isokaytoplace(int row,int col,int val,vector<vector<char>>& board)
   {
    char num=val+'0';
    for(int i=0;i<9;i++)
    {
        if(board[row][i]==num || board[i][col]==num) return false;
    }

    int nr=(row/3) *3;
    int nc=(col/3)*3;
    
    for(int i=nr;i<nr+3;i++)
    {
        for(int j=nc;j<nc+3;j++)
        {
            if(board[i][j]==num) return false;
        }
    }

    return true;
   }


    bool func(vector<vector<char>> &board)
    {
        for(int row=0;row<9;row++)
        {
            for(int col=0;col<9;col++)
            {
                if(board[row][col]=='.')
                {
                    for(int val=1;val<=9;val++)
                    {
                        if(isokaytoplace(row,col,val,board))
                        {
                           board[row][col]=val+'0';
                        
                           if(func(board)) return true;
                            
                           board[row][col]='.';
                        }


                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        func(board);
    }
};