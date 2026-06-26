class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(auto it:matrix)
        {
            ans.push_back(accumulate(it.begin(),it.end(),0));
        }
        return ans;
    }
};