class Solution {
    public int differenceOfSums(int n, int m) {
        int num1,num2;

        int num1sum=0;
        int num2sum=0; 

        for(int i=1;i<=n;i++)
        {
         if(i%m!=0)
         {
            num1sum+=i;
         }
         else{
            num2sum+=i;
         }
        }


        return num1sum-num2sum;
    }
}