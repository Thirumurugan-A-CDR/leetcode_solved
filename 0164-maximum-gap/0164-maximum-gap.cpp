class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        vector<int> sol;
        for(int i=0;i<nums.size()-1;i++)
        {
            sol.push_back(nums[i+1]-nums[i]);
        }
        int maxval=INT_MIN;
        for(int val:sol)
        {
            if(maxval<val)
            {
                maxval=val;
            }
        }
        return maxval;
    }
};