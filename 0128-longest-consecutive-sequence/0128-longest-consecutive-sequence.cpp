class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        vector<int> sord;
        if(nums.size()==0)
        {
            return 0;
        }
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int len=1;
        int count=1;
        for(auto &it:s)
        {
            sord.push_back(it);
        }
        for(int i=1;i<sord.size();i++)
        {
            if(sord[i]==(sord[i-1]+1))
            {
                count++;
            }
            else
            {
                len=max(len,count);
                count=1;
            }
        }
        len=max(count,len);
        return len;
    }
};