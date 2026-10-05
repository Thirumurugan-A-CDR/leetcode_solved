class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0;
        stack<int> st;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                st.push(0);
            }
            else
            {
                int sss = st.top();
                st.pop();

                int value;

                if(sss == 0)
                {
                    value = 1;
                }
                else
                {
                    value = 2 * sss;
                }

                if(st.empty())
                {
                    ans += value;
                }
                else
                {
                    st.top() += value;
                }
            }
        }

        return ans;
    }
};