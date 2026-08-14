class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int length=0;
        int l=0;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;

            while(mp[s[i]]>2)
            {
                mp[s[l]]--;

                if(mp[s[l]]==0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
            length=max(length,i-l+1);
        }
        return length;
    }
};