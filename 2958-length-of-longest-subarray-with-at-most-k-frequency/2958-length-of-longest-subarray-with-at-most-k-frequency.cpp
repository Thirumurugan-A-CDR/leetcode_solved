class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=INT_MIN;
        map<int,int> mp;
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;

            while(mp[nums[i]]>k)
            {
                mp[nums[l]]--;
                if(mp[nums[l]]==0)
                {
                    mp.erase(mp[nums[l]]);
                }
                    l++;
            }
            ans=max(ans,i-l+1);
        }
    return ans;
    }
};