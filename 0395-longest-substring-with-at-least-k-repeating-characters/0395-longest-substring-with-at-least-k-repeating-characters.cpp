class Solution {
public:

    int mini(const map<char,int>& mp)
    {
        int minval = INT_MAX;
        for(const auto& a : mp)
        {
            minval = min(minval, a.second);
        }
        return minval;
    }

    int longestSubstring(string s, int k) {
        int n = s.length();
        int maxi = 0;

        for(int targetUnique = 1; targetUnique <= 26; targetUnique++)
        {
            int left = 0;
            map<char,int> mp;
            int unique = 0;

            for(int r = 0; r < n; r++)
            {
                if(mp[s[r]] == 0) unique++;
                mp[s[r]]++;

                while(unique > targetUnique)
                {
                    mp[s[left]]--;
                    if(mp[s[left]] == 0)
                    {
                        mp.erase(s[left]);
                        unique--;
                    }
                    left++;
                }

                if(unique == targetUnique && mini(mp) >= k)
                {
                    maxi = max(maxi, r - left + 1);
                }
            }
        }

        return maxi;
    }
};