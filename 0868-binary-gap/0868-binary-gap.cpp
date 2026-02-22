class Solution {
public:
    int binaryGap(int n) {
        int c=0;
        int maxans=0;
        int firstbit=0;
        int i = 0;
        int sum=0;
        while ((1 << i) <= n) {
            i++;
        }

        int msb = i - 1;
        while(msb>=0)
        {
            firstbit=((n>>msb) & 1);
            if(firstbit==1)
            {
            sum++;
            
                if(sum==2){
                    sum=1;
                    maxans=max(maxans,c+1);
                    c=0;
                }
                else
                {
                    c=0;
                }

            }
            else
            {
                if(sum==1){c++;};
            }
            msb--;
        }

        return maxans;
    }
};