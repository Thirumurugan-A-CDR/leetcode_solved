class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> s;
        while(n>0)
        {
            s[n%10]++;
            n=n/10;
        }
        int ans=0;
        for(auto it:s)
        {
            ans+=it.first*it.second;
        }
        return ans;
    }
};