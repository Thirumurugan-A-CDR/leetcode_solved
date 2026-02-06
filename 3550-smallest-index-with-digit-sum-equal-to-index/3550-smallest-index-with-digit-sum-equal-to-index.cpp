class Solution {
public:
    bool check(int ele,int index)
    {
        int sum=0;
        while(ele!=0)
        {
            sum+=(ele%10);
            ele=ele/10;
        }
        return index==sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(check(nums[i],i))
            {
                    return i;
            }
        }
        return -1;
    }
};