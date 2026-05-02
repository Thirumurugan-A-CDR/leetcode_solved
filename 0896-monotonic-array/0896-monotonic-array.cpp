class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int counti=0;
        int countd=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<=nums[i+1])
            {
                counti+=1;
            }
            if(nums[i]>=nums[i+1])
            {
                countd+=1;
            }
        }
        return counti+1==nums.size() || countd+1==nums.size();
    }
};