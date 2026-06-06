class Solution {
public:
    int func(string n)
    {
        int ans=0;
        for(auto x:n)
        {
            ans+=x-'0';
        }
        return ans;
    }
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(auto& x:nums)
        {
            mini=min(mini,func(to_string(x)));
        }
        return mini;
    }
};