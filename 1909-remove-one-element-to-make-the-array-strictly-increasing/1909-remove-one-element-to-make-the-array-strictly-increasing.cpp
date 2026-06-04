class Solution {
public:
    bool solve(vector<int>& nums)
    {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>=nums[i])
            {
                return false;
            }

        }
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) {
      int count=0;
     
      for(int i=1;i<nums.size();i++)
      {
        if(nums[i-1]<nums[i])
        {
            count++;
        }
      }
      if(count==nums.size()-1)
      {
        return true;
      }
        for(int i=0;i<nums.size();i++)
        {
            vector<int> t=nums;
            t.erase(t.begin()+i);
            bool s=solve(t);
            if(s==true)
            {
                return true;
            }
        }
        return false;
    }
};