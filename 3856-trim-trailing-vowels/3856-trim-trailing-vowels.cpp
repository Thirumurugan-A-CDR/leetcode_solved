class Solution {
public:
    string trimTrailingVowels(string s) {
      int i;
        for( i=s.length()-1;i>=0;i--)
          {
              if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u')
              {
                  
              }
              else
              {
                  break;
              }
          }
        string ans="";
        for(int k=0;k<=i;k++)
            {
                ans+=s[k];
            }
        return ans;
    }
};