class Solution {
public:
    int countGoodSubstrings(string s) {
        map<char,int> mp;
        int count=0;
        int k=3;
        int left=0;
        for(int i=0;i<k;i++)
        {
            mp[s[i]]++;
        }
        if(mp.size()==k)
        {
            count+=1;
        }
        for(int j=k;j<s.length();j++)
        {
            mp[s[j]]++;
            mp[s[j-k]]--;
            if(mp[s[j-k]]==0)
            {
                mp.erase(s[j-k]);
            }
            if(mp.size()==k)
            {
                count+=1;
            }

        }
        return count;
    }
};