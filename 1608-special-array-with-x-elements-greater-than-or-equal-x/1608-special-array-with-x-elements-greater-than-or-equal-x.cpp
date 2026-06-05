class Solution {
public:
    bool check(vector<int>& nums,int x)
    {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=x)
            {
                c++;
            }
        }
        if(c==x) return true;
        else
        {
            return false;
        }
    }
    int specialArray(vector<int>& nums) {
        int c=0;
        int my_max=*max_element(nums.begin(),nums.end());
        for(int i=0;i<=my_max;i++)
        {
            if(check(nums,i))
            {
                return i;
            }
        }
            return -1;
       
    }
};