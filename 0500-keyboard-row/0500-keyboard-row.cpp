class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string a="qwertyuiop";
        string b="asdfghjkl";
        string c="zxcvbnm";
        vector<string> sol;
        int count;
        for(int i=0;i<words.size();i++)
        {
            count=0;
            string s=words[i];
            for(char &c:s)
            {
                c=tolower(c);
            }
            if(a.find(s[0])!=string::npos)
            {
                for(int j=0;j<words[i].length();j++)
                {
                    if(a.find(s[j])!=string::npos)
                    {
                        count++;
                    }
                }
            }
            else if(b.find(s[0])!=string::npos)
            {
                  for(int j=0;j<words[i].length();j++)
                  {
                    if(b.find(s[j])!=string::npos)
                    {
                        count++;
                    }
            }
            }
            else if(c.find(s[0])!=string::npos)
            {
                for(int j=0;j<words[i].length();j++)
                {
                if(c.find(s[j])!=string::npos)
                {
                    count++;
                }

                 }
            }
            if(count==words[i].size())
            {
                sol.push_back(words[i]);
            }
        }
        return sol;
    }
};