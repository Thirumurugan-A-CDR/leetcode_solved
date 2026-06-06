class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> alpha;
        char c='a';        
        for(int i=26;i>=0;i--)
        {
            alpha.insert({c++,i});
        }
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
           ans+=alpha[s[i]]*(i+1);
        }
        return ans;
    }
};