class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> c;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                c.push(s[i]);
            }
            else
            {
                if(c.empty())
                {
                    c.push(s[i]);
                }
                else
                {
                    if(c.top()=='(' && s[i]==')')
                    {
                        c.pop();
                    }
                    else
                    {
                        c.push(s[i]);
                    }
                }
            }
        }
        return c.size();
    }
};