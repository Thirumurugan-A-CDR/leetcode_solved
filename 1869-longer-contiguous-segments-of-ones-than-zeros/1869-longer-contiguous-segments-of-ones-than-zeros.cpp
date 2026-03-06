class Solution {
public:
    bool checkZeroOnes(string s) {
        int onemax=0;
        int zeromax=0;
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                c++;
            }
            else
            {
                onemax=max(onemax,c);
                c=0;
            }
        }
        onemax=max(onemax,c);
        c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
            else
            {
                zeromax=max(zeromax,c);
                c=0;
            }
        }
        zeromax=max(zeromax,c);
        return onemax>zeromax;

    }
};