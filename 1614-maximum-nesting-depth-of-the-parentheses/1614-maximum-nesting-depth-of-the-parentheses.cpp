class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxans = 0;
        int currans = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != '(' && s[i] != ')')
            {
                continue;
            }

            if(s[i] == '(')
            {
                st.push(s[i]);
                currans++;

                maxans = max(maxans, currans);
            }
            else if(s[i] == ')')
            {
                if(!st.empty() && st.top() == '(')
                {
                    st.pop();
                    currans--;
                }
            }
        }

        return maxans;
    }
};