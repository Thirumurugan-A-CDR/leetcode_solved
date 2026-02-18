class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       vector<vector<int>> count;
       vector<string> firstans;
       if(words.size()==1)
       {
        string ss=words[0];
            for(int i=0;i<words[0].size();i++)
            {
                firstans.push_back(string(1,ss[i]));
            }
            return firstans;
       }
        for(string s:words)
        {
            vector<int> temp(26,0);
            for(int j=0;j<s.length();j++)
            {
                temp[s[j]-'a']++;
            }
            count.push_back(temp);

        }
        vector <pair<int,bool>> h(26,{0,false});
        vector<int> first=count[0];
        for(int i=0;i<26;i++)
        {
            if(first[i]>=1)
            {
                h[i].first=first[i];
                h[i].second=true;
            }
        }
        for(int i=1;i<count.size();i++)
        {
            vector<int> foruse=count[i];
            for(int j=0;j<26;j++)
            {
                    if(foruse[j]>=1 && h[j].second==true )
                    {
                        h[j].first=min(foruse[j],h[j].first);
                        h[j].second=true;
                    }
                    else
                    {
                        h[j].second=false;
                    }
            }
        }
       vector<string> s;
       for(int i=0;i<26;i++)
       {
        if(h[i].second==true)
        {
            int k=0;
            while(k<h[i].first)
            {
                s.push_back(string(1,i+'a'));
                k++;
            }
        }

       }
       return s;

    }
};