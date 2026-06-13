class Solution {
public:
    vector<vector<int>> dp;

    bool func(vector<int>& nums, int target, int index, int cur_sum)
    {
        if(cur_sum == target)
            return true;

        if(index >= nums.size() || cur_sum > target)
            return false;

        if(dp[index][cur_sum] != -1)
            return dp[index][cur_sum];

        return dp[index][cur_sum] =
            func(nums, target, index + 1, cur_sum + nums[index]) ||
            func(nums, target, index + 1, cur_sum);
    }

    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);

        if(sum % 2 != 0)
            return false;

        int target = sum / 2;

        dp.resize(nums.size(), vector<int>(target + 1, -1));

        return func(nums, target, 0, 0);
    }
};