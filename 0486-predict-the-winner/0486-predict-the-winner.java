class Solution {
   int recfunc(int[] nums,int strindex,int endindex)
   {
      if(strindex==endindex) return nums[strindex];

      int leftmax=nums[strindex]-recfunc(nums,strindex+1,endindex);

      int rightmax=nums[endindex]-recfunc(nums,strindex,endindex-1);

      return Math.max(leftmax,rightmax);
   
   }
      

    public boolean predictTheWinner(int[] nums) {
        int str=0;
        int end=nums.length-1;
        int sol=recfunc(nums,str,end);
        if(sol>=0) return true;
        else{
        return false;
        }
    }
}