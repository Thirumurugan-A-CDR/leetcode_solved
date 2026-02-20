class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==1){
            return 0;
        }
        int l=0;
        int mul=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mul*=nums[i];
                while(l<nums.size() && mul>=k){
                    mul/=nums[l++];
                }
            if(mul<k){
                count+=(i-l+1);
            }
        }
        return count;
    }
};