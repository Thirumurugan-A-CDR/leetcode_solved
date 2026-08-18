class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int mp[51];

        for(int i = 0; i < 51; i++)
        {
            mp[i] = 0;
        }

        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }

        if(k == 1)
        {
            for(int i = 50; i >= 0; i--)
            {
                if(mp[i] == 1)
                {
                    return i;
                }
            }

            return -1;
        }

        if(k == n)
        {
            for(int i = 50; i >= 0; i--)
            {
                if(mp[i] > 0)
                {
                    return i;
                }
            }

            return -1;
        }

        if(k > 1 && k < n)
        {
            int ans = -1;

            if(mp[nums[0]] == 1)
            {
                ans = max(ans, nums[0]);
            }

            if(mp[nums[n-1]] == 1)
            {
                ans = max(ans, nums[n-1]);
            }

            return ans;
        }

        return -1;
    }
};