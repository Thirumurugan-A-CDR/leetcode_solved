class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=0;
        int max2=0;
        for(int c:nums)
        {
            if(max1<c)
            {
                max2=max1;
                max1=c;
            }
            else if(max2<c)
            {
                max2=c;
            }
        }
        return ((max1-1)*(max2-1));
    }
};