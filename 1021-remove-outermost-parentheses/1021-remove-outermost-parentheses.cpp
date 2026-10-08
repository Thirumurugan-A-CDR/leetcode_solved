class Solution {
public:
    string removeOuterParentheses(string s) {
      int balance=0;
      string ans="";
      for(int i=0;i<s.length();i++)
      {
       if(s[i]=='(')
       {
        balance++;
        if(balance>1)
        {
            ans+=s[i];
        }
       }
       else
       {
        balance--;
        if(balance>0)
        {
            ans+=s[i];
        }
       }
      }
      return ans;
      
    }
};