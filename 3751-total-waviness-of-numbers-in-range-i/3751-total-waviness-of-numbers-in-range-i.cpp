class Solution {
public:
    int findwaive(int num)
    {
        int peak=0;
        int valley=0;
        string t=to_string(num);
        if(t.length()<3) return 0;
        else
        {
            for(int i=1;i<t.length()-1;i++)
            {
                if((t[i-1]-'0'>t[i]-'0') && (t[i]-'0'<t[i+1]-'0'))
                {
                    valley++;
                }
                 else if((t[i-1]-'0'<t[i]-'0')&&(t[i]-'0'>t[i+1]-'0'))
                 {
                    peak++;
                 }
            }
        }
        return peak+valley;
    }
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++)
        {
            ans+=findwaive(i);
        }
        return ans;
    }
};