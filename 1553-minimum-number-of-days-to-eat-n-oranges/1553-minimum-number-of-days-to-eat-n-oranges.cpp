class Solution {
public:
    unordered_map<int,int> dp;
    int func(int n)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }

        if(n<0)
        {
            return 1e9;
        }
        if(dp.count(n))
        {
            return dp[n];
        }

        return dp[n]=1+min((n%2+func(n/2)),(n%3+func(n/3)));

    }
    int minDays(int n) {
        dp.clear();
        return func(n);
    }
};