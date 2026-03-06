class Solution {
public:
    bool func(int index,vector<int>&nums,vector<int>& dp)
    {
        int n=nums.size();
        if(index>=n-1)
        {
            return true;
        }
        int pos=nums[index];
        if(dp[index]!=-1)
        {
            return dp[index];
        }
        for(int i=1;i<=pos && index+i<n;i++)
        {
            if(func(index+i,nums,dp))
            {
                return dp[index]=1;
            }
        }
        return dp[index]=0;
        
    }

    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return func(0,nums,dp);
    }
};