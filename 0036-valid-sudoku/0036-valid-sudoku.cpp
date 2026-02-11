class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      unordered_set<int> row[9];
        unordered_set<int> col[9];
        unordered_set<int> box[9];
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char val=board[i][j];
                if(val=='.') continue;

                int b=(i/3)*3+(j/3);
                if(row[i].count(val)) return false;
                row[i].insert(val);
                if(col[j].count(val)) return false;
                col[j].insert(val);
                if(box[b].count(val)) return false;
                box[b].insert(val);
                
            }
        }
        return true;

    }
};