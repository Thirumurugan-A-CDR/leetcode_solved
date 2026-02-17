class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i+1;j<matrix.size();j++)
            {
                int t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
            }
        }
             int start=0;
             int end=matrix.size()-1;
        for(int i=0;i<matrix.size();i++)
        {
              start=0;
              end=matrix.size()-1;
           while(start<end)
           {
                int t=matrix[i][start];
                matrix[i][start]=matrix[i][end];
                matrix[i][end]=t;
                start++;
                end--;
           }
        }
        
    }
};