class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     vector<int> next;
     vector<int> pre;
     int fact=1;
     for(int i=0;i<nums.size();i++)
     {
        pre.push_back(fact);
        fact=fact*nums[i];
     }
     fact=1;
     for(int i=nums.size()-1;i>=0;i--)
     {
        next.push_back(fact);
        fact=fact*nums[i];
     }
     reverse(next.begin(),next.end());
    for(int i=0;i<nums.size();i++)
    {
        nums[i]=pre[i]*next[i];
    }
    return nums;
    }
};