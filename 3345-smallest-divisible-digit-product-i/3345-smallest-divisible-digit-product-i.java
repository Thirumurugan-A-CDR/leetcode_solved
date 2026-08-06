class Solution {

    boolean func(int n,int t)
    {
        int digit_p=1;
        while(n>0)
        {
            digit_p*=n%10;
            n=n/10;
        }
        if(digit_p%t==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public int smallestNumber(int n, int t) {
        for(int i=n;;i++)
        {
           boolean s=func(i,t);
           if(s==true) return i;
        }
    
    }
}