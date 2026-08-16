class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int bitwise=0;
        int zerocount=0;
        for(int i=0;i<nums.size();i++)
        {
            bitwise^=nums[i];
            if(nums[i]==0) zerocount++;
        }
        if(zerocount==nums.size()) return 0;
        if(bitwise!=0) return nums.size();
        else return nums.size()-1;            
    }
};