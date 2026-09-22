class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char> ss;
        char ll='a';
        for(char i:key)
        {
            if(ss.find(i)!=ss.end()) continue;
            if(i==' ') continue;
            ss[i]=ll;
            ll++;
        }
        string ans="";
        for(char sss:message)
        {
            if(sss==' ') ans+=' ';
            else ans+=ss[sss];
        }
        return ans;
    }
};