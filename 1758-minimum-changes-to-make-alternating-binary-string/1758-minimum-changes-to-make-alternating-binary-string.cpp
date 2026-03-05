class Solution {
public:
    int minOperations(string s) {
        int oddop=0;
        int evenop=0;
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0 && s[i]!='1')
            {
                oddop++;
            }
            else if(i%2!=0 && s[i]!='0')
            {
                oddop++;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0 && s[i]!='0')
            {
                evenop++;
            }
            else if(i%2!=0 && s[i]!='1')
            {
                evenop++;
            }
        }
        return min(oddop,evenop);
    }
};