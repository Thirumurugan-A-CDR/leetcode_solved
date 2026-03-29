class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1==s2)return true;
        string t1=s1;
        string t2=s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1!=s2)return false;
        s1=t1;
        s2=t2;
        if(s1[0]==s2[2] && s1[2]==s2[0] || s1[1]==s2[3] && s1[3]==s2[1] )
        {
            return true;
        }
        if(s1[0]==s2[2] && s1[2]==s2[0] && s1[1]==s2[3] && s1[3]==s2[1] )
        {
            return true;
        }

       return false;
        
          
    }
};