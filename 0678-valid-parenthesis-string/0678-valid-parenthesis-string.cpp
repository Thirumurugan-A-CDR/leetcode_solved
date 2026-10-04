class Solution {
public:
    vector<vector<int>> dp;

    bool check(string s, int index, int balance)
    {
        if(balance < 0)
        {
            return false;
        }
        if(index == s.length())
        {
            return balance == 0;
        }

        if(dp[index][balance] != -1)
        {
            return dp[index][balance];
        }

        if(s[index] == '*')
        {
            bool c1 = check(s, index + 1, balance + 1);
            bool c2 = check(s, index + 1, balance - 1);
            bool c3 = check(s, index + 1, balance);

            return dp[index][balance] = (c1 || c2 || c3);
        }

        int originalBalance = balance;

        if(s[index] == '(')
        {
            balance++;
        }
        else if(s[index] == ')')
        {
            balance--;
        }


        return dp[index][originalBalance] = check(s, index + 1, balance);
    }

    bool checkValidString(string s)
    {
        dp.assign(s.length(), vector<int>(s.length() + 1, -1));

        return check(s, 0, 0);
    }
};