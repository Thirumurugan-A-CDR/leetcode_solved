class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int t=x;
        while(t>0)
        {
            int lastdig=t%10;
            sum+=lastdig;
            t=t/10;
        }
        return (x%sum==0)?sum:-1;
    }
};