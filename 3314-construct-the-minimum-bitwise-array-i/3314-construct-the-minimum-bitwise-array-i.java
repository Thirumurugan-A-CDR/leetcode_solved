class Solution {
    public int[] minBitwiseArray(List<Integer> nums) {
        int sol[]=new int[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            sol[i]=minans(nums.get(i));
        }
        return sol;
    }
    int minans(int val)
    {
        for(int i=0;i<val;i++)
        {
            if((i | (i+1))==val)
            {
                return i;
            }
        }
        return -1;
    }

}