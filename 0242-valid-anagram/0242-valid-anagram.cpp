class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> firstword(26,0);
        vector<int> secondword(26,0);
        if(s.length()!=t.length())
        {
            return false;
        }
        for(char c:s)
        {
            firstword[c-'a']++;
        }
        for(char c:t)
        {
            secondword[c-'a']++;
        }
        return firstword==secondword;

    }
};