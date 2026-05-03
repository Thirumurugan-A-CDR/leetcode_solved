class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.size()) return false;
        int n=s.size();
        int i=0;
        vector<int> a(26,0);
        for(char x:s)
        {
            a[x-'a']++;
        }
        for(char x:goal)
        {
            a[x-'a']--;
        }
        if(count(a.begin(),a.end(),0)!=a.size()) return false;

        while(i<n)
        {
           s = s.substr(1) + s[0];
           if(s==goal)
           {
            return true;
           }
           i++;
        }
        return false;
    }
};