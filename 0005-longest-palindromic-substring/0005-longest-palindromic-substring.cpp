class Solution {
public:
    string longestPalindrome(string s)
    {
        int start=0;
        int maxlength=0;


        for(int i=0;i<s.length();i++)
        {
            int l=i;
            int r=i;

            while(l>=0 && r<s.length() && s[l]==s[r])
            {
                if(r-l+1>maxlength)
                {start=l;
                maxlength=r-l+1;
                }
                l--;
                r++;
            }

          l=i;
          r=i+1;
          
          while(l>=0 && r<s.length() &&  s[l]==s[r])
          {
            
            if(r-l+1>maxlength)
            {
                start=l;
                maxlength=r-l+1;
            }

            l--;
            r++;
          }

                  

        }

        return s.substr(start,maxlength);


    }
};