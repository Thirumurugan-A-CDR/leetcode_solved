class Solution {
public:
    int arraySign(vector<int>& nums) {
        long double s=1;
        for(int x:nums)
        {
            s*=x;
        }
        if(s==0)
        {
            return 0;
        }
        else if(s>0)
        {
            return 1;
        }
        else
        {
            return -1;
        }

    }
};