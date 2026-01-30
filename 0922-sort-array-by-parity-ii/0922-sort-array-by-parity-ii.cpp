class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       int odd[nums.size()/2];
       int even[nums.size()/2];
       int i=0;
       int j=0;
       for(int val:nums)
       {
        if(val%2==0)
        {
            even[i++]=val;
        }
        else
        {
            odd[j++]=val;
        }
       }
       i=0;
       j=0;
       for(int k=0;k<nums.size();k++)
       {
        if(k%2==0)
        {
            nums[k]=even[i++];
        }
        else
        {
            nums[k]=odd[j++];
        }
       }
        return nums;
    }
};