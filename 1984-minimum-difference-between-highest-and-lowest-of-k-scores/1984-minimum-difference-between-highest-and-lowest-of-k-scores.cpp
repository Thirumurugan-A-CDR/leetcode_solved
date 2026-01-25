class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int sol=INT_MAX;
        sort(nums.begin(),nums.end());
         for(int i=0;i+k-1<nums.size();i++)
         {
            sol=min(sol,nums[i+k-1]-nums[i]);
         }
         return sol;
    }
};