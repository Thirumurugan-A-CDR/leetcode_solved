class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       vector<int> left(nums.size());
       vector<int> right(nums.size());
       int sum=0;
       for(int i=0;i<nums.size();i++)
       {
        left[i]=sum;
        sum+=nums[i];
       } 
       sum=0;
       for(int i=nums.size()-1;i>=0;i--)
       {
        right[i]=sum;
        sum+=nums[i];
       } 
       for(int i=0;i<nums.size();i++)
       {
        nums[i]=abs(left[i]-right[i]);
       }
       return nums;
    }
};