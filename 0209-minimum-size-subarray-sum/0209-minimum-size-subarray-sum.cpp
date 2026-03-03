class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int mini=INT_MAX;
        int currsum=0;
        for(int r=0;r<nums.size();r++)
        {
            currsum+=nums[r];
            while(currsum>=target)
            {
                mini=min(mini,r-left+1);
                currsum-=nums[left];
                left++;
            }
        }
        if(mini==INT_MAX)
        {
            return 0;
        }
    return mini;
    }
};