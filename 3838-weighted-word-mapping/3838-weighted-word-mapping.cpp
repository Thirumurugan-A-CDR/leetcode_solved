class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";

        char my[26];
        char s='a';
        for(int i=25;i>=0;i--)
        {
            my[i]=s;
            s++;
        }



        for(int i=0;i<words.size();i++)
        {
            int sum=0;
            string t=words[i];
            for(int j=0;j<t.size();j++)
            {
                sum += weights[t[j] - 'a'];
            }

            int charval=sum%26;
            ans+=my[charval];
        }



        return ans;
    }
};