class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            int current_target=1;
            int currentlength=1;
            for(int j=i+1;j<nums.size();j++)
            {
               if(nums[j]-nums[j-1]==current_target)
               {
                currentlength++;
                current_target*=-1;
                ans=max(ans,currentlength);
               }
               else
               {
                break;
               }
            }
        }
        return ans;
    }
};