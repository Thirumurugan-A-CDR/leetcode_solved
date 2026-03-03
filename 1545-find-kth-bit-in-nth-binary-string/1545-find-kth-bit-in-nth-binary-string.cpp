class Solution {
public:
string invert(string s)
{
    string temp1="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            temp1+='0';
        }
        else
        {
            temp1+='1';
        }
    }

     reverse(temp1.begin(),temp1.end());
     return temp1;
}
    char findKthBit(int n, int k) {
        string temp="0";
        for(int i=1;i<n;i++)
        {
            temp=temp+"1"+invert(temp);
        }
        return temp[k-1];
    }
};