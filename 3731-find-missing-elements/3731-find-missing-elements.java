class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        List<Integer> ans=new ArrayList<>();
         Arrays.sort(nums);
         int min=nums[0];
         int max=nums[nums.length-1];
         HashSet<Integer> myset=new HashSet<>();
         for(int i=0;i<nums.length;i++)
         {
            myset.add(nums[i]);
         }
         for(int i=min;i<=max;i++)
         {
            if(!myset.contains(i))
            {
               ans.add(i);
            }
         }
         return ans;

    }
}