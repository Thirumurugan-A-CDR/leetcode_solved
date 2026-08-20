class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> ans1;
        vector<int> ans2;
        int last1=nums[0];
        int last2=nums[1];
        ans1.push_back(nums[0]);
        ans2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            if(last1>last2)
            {
                ans1.push_back(nums[i]);
                last1=nums[i];
            }
            else
            {
                ans2.push_back(nums[i]);
                last2=nums[i];
            }
        }
        vector<int> ans;
        for(int x:ans1)
        {
            ans.push_back(x);
        }
        for(int x:ans2)
        {
            ans.push_back(x);
        }
        return ans;
    }
};