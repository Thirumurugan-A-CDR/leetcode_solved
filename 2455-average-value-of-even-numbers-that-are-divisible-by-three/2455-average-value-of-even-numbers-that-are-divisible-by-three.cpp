class Solution {
public:
    int averageValue(vector<int>& nums) {
        int ans=0;
        int count=0;
        for(int i:nums)
        {
            if((i%3)==0 && (i%2)==0)
            {
               ans+=i;
               count++;
            }
        }
        return (ans==0)?0:ans/count;
    }
};