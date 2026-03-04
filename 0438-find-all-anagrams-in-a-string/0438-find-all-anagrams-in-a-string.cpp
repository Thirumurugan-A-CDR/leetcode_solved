class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.size()<p.size())
        {
            return {};
        }
        vector<int> freqs(26,0),freqp(26,0);
        int k=p.length();
        int left=0;
        for(char c:p)
        {
            freqp[c-'a']++;
        }
        for(int i=0;i<k;i++)
        {
            freqs[s[i]-'a']++;
        }
        if(freqp==freqs)
        {
            ans.push_back(left);
        }

        for(int r=k;r<s.size();r++)
        {

            freqs[s[r]-'a']++;
            freqs[s[left]-'a']--;
            left++;
            if(freqs==freqp)
            {
                ans.push_back(left);
            }
        }
        return ans;
    }
};