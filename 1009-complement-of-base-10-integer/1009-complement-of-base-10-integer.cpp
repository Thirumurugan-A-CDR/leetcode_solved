class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string s="";
        while(n>0)
        {
            int lastbit=n%2;
        if(lastbit==1) s='0'+s;
        else s='1'+s;

        n=n/2;
        }
        return stoi(s,nullptr,2);
    }
};