class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int digitsum=0;
        long long digitmul=1;

        while(temp>0)
        {
            int dig=temp%10;
            digitsum+=dig;
            temp=temp/10;
            
        }
        temp=n;
        while(temp>0)
        {
            int dig=temp%10;
            digitmul*=dig;
            temp=temp/10;

        }

        return ((n%(digitsum+digitmul))==0)?true:false;
    }
};