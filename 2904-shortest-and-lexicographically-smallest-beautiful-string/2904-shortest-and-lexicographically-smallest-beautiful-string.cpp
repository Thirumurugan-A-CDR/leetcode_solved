class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> store_sub;

        for(int i = 0; i < s.length(); i++)
        {
            int count = 0;
            string temp = "";

            for(int j = i; j < s.length(); j++)
            {
                temp += s[j];

                if(s[j] == '1')
                    count++;

                if(count == k)
                {
                    store_sub.push_back(temp);
                }

                if(count > k)
                    break;
            }
        }

        if(store_sub.size() == 0)
            return "";

        sort(store_sub.begin(), store_sub.end());

        string ans = store_sub[0];

        for(string x : store_sub)
        {
            if(x.length() < ans.length())
                ans = x;
            else if(x.length() == ans.length() && x < ans)
                ans = x;
        }

        return ans;
    }
};