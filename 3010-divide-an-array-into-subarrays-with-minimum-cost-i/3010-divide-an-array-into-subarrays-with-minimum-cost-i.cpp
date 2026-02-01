class Solution {
public:
    int minimumCost(vector<int>& nums) {
       int min1=nums[0];
       int min2=INT_MAX;
       int min3=INT_MAX;
       for(int i=1;i<nums.size();i++) 
       {
        if(min2>nums[i])
        {
            min3=min2;
            min2=nums[i];
        }
        else
        {
            if(nums[i]<min3)
            {
                min3=nums[i];
            }
        }
       }
       return min1+min2+min3;
    }
};