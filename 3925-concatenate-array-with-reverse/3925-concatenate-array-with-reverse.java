class Solution {
    public int[] concatWithReverse(int[] nums) {
        int a[]=new int[nums.length*2];
        int j=0;
        int n=nums.length;
       for(int i=0;i<n;i++){
            a[i]=nums[i];
            a[i+n]=nums[n-1-i];
       }
        return a;
    }
}