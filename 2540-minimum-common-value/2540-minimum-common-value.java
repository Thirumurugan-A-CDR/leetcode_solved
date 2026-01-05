class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        Set<Integer> first=new HashSet<>();
        Set<Integer> second=new HashSet<>();
        for(int n1:nums1)
        {
            first.add(n1);
        }
        for(int n2:nums2)
        {
            second.add(n2);
        }
       first.retainAll(second);
       int min=Integer.MAX_VALUE;
       for(int val:first)
       {
        if(min>val)
        {
            min=val;
        }
       } 
       if(first.size()==0)return -1;
        return min;
    }
}