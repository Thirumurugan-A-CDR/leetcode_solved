class Solution {
    public int dominantIndex(int[] nums) {
        int max=nums[0];
        int maxpos=0;
        for(int i=0;i<nums.length;i++)
        {
            if(max<nums[i])
            {
                max=nums[i];
                maxpos=i;
            }
        }
        for(int i=0;i<nums.length;i++)
        {
            if((nums[i]*2)>max && (i!=maxpos))
            {
                return -1;
            }
        }
        return maxpos;
    }
}