class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
      int l=0;
      int r=nums.size()-1;
      int c=0;
      while(l<=r)
      {
        if(nums[l]==0 && nums[r]==0)
        {
            r--;
        }
        else if(nums[l]!=0 && nums[r]==0)
        {
            l++;
            r--;
        }
        else if(nums[l]==0 && nums[r]!=0)
        {
            swap(nums[l],nums[r]);
            c++;
            l++;
            r--;
        }
        else if(nums[l]!=0 && nums[r]!=0)
        {
            l++;
        }
      } 
      return c; 
    }
};