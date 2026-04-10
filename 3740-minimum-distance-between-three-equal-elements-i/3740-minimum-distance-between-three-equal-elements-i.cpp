class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int mini=INT_MAX;
        if(nums.size()<3)
        {
            return -1;
        }
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(i!=j && j!=k && k!=i)
                    {
                        if(nums[i]==nums[j] && nums[j]==nums[k])
                        {
                            mini=min(mini,abs(i-j)+abs(j-k)+abs(k-i));
                        }
                    }
                }
            }
        }
    if(mini==INT_MAX) return -1;
    else return mini;
    }
};