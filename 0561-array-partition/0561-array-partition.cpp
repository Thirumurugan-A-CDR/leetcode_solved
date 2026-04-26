class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i+=2)
        {
            ans+=min(nums[i],nums[i+1]);
        }
        return ans;
    }
};