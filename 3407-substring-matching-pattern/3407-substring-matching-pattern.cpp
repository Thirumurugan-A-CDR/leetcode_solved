class Solution {
public:
    bool hasMatch(string s, string p) {
      if(p=="*")
      {
        return true;
      }
       string firstpart="";
       string secondpart="";
       int i=0;
       while(i<p.length() && p[i]!='*')
        { 
            firstpart+=p[i];
            i++;
       }
       i++;
       while(i<p.length())
       {
        secondpart+=p[i];
        i++;
       }
        size_t s1=s.find(firstpart);
        size_t s2=s.rfind(secondpart);
        if(s1!=string::npos && s2!=string::npos && s1+firstpart.length()<=s2)
        {
            return true;
        }
        return false;
    }
};