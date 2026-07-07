class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string num="";
        int temp=n;
        long long sum=0;
        while(temp>0)
        {
            int dig=temp%10;
            if(dig!=0) 
            {
            sum+=dig;
            num+=dig+'0';
            }
            temp=temp/10;
        }
        reverse(num.begin(),num.end());
       return (sum)*stoll(num);
    }
};