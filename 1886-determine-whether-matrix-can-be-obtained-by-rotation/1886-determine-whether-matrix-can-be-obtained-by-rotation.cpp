class Solution {
public:
    void change(vector<vector<int>>& mat)
    {

        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int t=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=t;
            }
        }

        int start=0;
        int end=n-1;
        while(start<end)
        {
            swap(mat[start],mat[end]);
            start++;
            end--;
        }

    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++)
        {
            change(mat);
            if(mat==target)
            {
                return true;
            }
        }
        return false;
    }
};