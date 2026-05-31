class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<vector<char>> s;
        for(int i=0;i<strs.size();i++)
        {
            vector<char> ss;
            for(int j=0;j<strs[i].size();j++)
            {
                ss.push_back(strs[i][j]);
            }
            s.push_back(ss);
        }
        int count_column=0;
        int n=s.size();
        int m=s[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(s[j][i]>s[j+1][i])
                {
                    count_column++;
                    break;
                }
            }
        }
        return count_column;
        
    }
};