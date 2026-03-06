class Solution {
public:
    bool checkOnesSegment(string s) {
       int onecount=0;
       for(int i=0;i<s.length();i++)
       {
        if(s[i]=='1')
        {
            onecount++;
        }
       }
       int conone=0;
       for(int i=0;i<s.length();i++)
       {
        if(s[i]=='1')
        {
            conone++;
        }
        else
        {
            break;
        }
       }
       return onecount==conone;
    }
};