class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> ss;
        for(auto& it:s)
        {
            ss[it]++;
        }
        return ss.size();
    }
};