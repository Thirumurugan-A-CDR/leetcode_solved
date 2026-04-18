class Solution {
public:
    int mirrorDistance(int n) {
        int temp=n;
        if(n==0) return 0;
        int rev=0;
        while(n>0)
        {
            int lastbit=n%10;
            rev=rev*10+lastbit;
            n=n/10;
        }
        return abs(temp-rev);
    }
};