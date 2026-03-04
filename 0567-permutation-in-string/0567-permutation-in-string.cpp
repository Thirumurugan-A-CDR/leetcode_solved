class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
        {
            return false;
        }
        int k=s1.size();
        int left=0;
        vector<int> freqs1(26,0),freqs2(26,0);
        for(char c:s1)
        {
            freqs1[c-'a']++;
        }
        for(int i=0;i<k;i++)
        {
            freqs2[s2[i]-'a']++;
        }
        if(freqs1==freqs2)
        {
            return true;
        }
        for(int r=k;r<s2.length();r++)
        {
            freqs2[s2[r]-'a']++;
            freqs2[s2[left]-'a']--;
            left++;
            if(freqs1==freqs2)
            {
                return true;
            }

        }
    return false;


        
    }
};