class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        if(nums.size()<4) return false;
        int firstpos=0;
        int i=0;
        int j=0;
        int k=0;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                firstpos++;
            }
            else{
                break;
            }
        }
        int c=firstpos;
        if((firstpos==0) ||(firstpos==nums.size()-1))  return false;
        for( j=i;j<nums.size()-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if((j==nums.size()-1 )||( j==firstpos)) return false;
        for(k=j;k<nums.size()-1;k++)
        {
           if(nums[k]<nums[k+1])
           {
            continue;
           } 
           else
           {
            break;
           }
        }
        if(k==nums.size()-1)
        {
            return true;
        }
        return false;

    }
};