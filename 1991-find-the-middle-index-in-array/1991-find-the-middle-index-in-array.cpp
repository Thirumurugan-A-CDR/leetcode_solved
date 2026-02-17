class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int suffixarray[nums.size()];
        int n=nums.size();
        suffixarray[n-1]=nums[n-1];
        int sum=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            sum+=nums[i];
            suffixarray[i]=sum;
        }
        int presum=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(presum==suffixarray[i+1])
            {
                return i;
            }
            presum+=nums[i];
        }
        if(presum==0)
        {
            return n-1;
        }
        return -1;
    }
};