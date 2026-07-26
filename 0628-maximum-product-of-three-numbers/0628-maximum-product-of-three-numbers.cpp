class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
        int minimum1=INT_MAX,minimum2=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max1)
            {
                        max3=max2;
                        max2=max1;
                        max1=nums[i];
            }
            else if(nums[i]>max2)
            {
                    max3=max2;
                    max2=nums[i];
            }
            else if(nums[i]>max3)
            {
                max3=nums[i];
            }
            if(nums[i]<minimum1)
            {
                minimum2=minimum1;
                minimum1=nums[i];
            }
            else if(minimum2>nums[i])
            {
                minimum2=nums[i];
            }

        }
        return max((max1*max2*max3),(max1*minimum1*minimum2));
    }
};