class Solution {
public:
    bool checkStrings(string s1, string s2) {
       if(s1==s2)return true;
       string t1=s1;
       string t2=s2;
       sort(s1.begin(),s1.end());
       sort(s2.begin(),s2.end());
       if(s1!=s2)return false;
       s1=t1;
       s2=t2;
       string odd1="";
       string odd2="";
       string even1="";
       string even2="";
        for(int i=0;i<s1.length();i++)
        {
            if((i%2)==0)
            {
                even1+=s1[i];
                even2+=s2[i];
            }
            else
            {
                odd1+=s1[i];
                odd2+=s2[i];
            }
        }
        sort(odd1.begin(),odd1.end());
        sort(odd2.begin(),odd2.end());
        sort(even1.begin(),even1.end());
        sort(even2.begin(),even2.end());
        return odd1==odd2 && even1==even2;
    }
};