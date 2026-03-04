class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        vector<pair<int,int>> v;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                {
                    v.push_back({i,j});
                }
            }
        }
        int duplicount=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
               if(i!=j)
               {
                auto it=v[i];
                auto it2=v[j];
                if(it.first==it2.first || it.second==it2.second)
                {
                    duplicount++;
                    break;
                }
               }
            }
        }
        return v.size()-duplicount;

     }
};