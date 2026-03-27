class Solution {
public:
    void simulate(vector<vector<int>>& mat)
    {
        for(int i=0;i<mat.size();i++)
        {
            vector<int>& t=mat[i];
                if(i%2==0)
                {
                    int val=t[0];
                    t.push_back(val);
                    t.erase(t.begin());
                }
                else
                {
                    int val=t[t.size()-1];
                    t.insert(t.begin(),val);
                    t.erase(t.end());
                }
        }
    }
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        vector<vector<int>> t=mat;
        int shift=k%n;
        for(int i=0;i<k;i++)
        {
            simulate(mat);
        }
        return mat==t;
    }
};