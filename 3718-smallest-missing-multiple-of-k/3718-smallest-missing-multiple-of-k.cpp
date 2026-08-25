class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s;
        for(int x:nums)
        {
            s.insert(x);
        }

        for(int i=1;k<=100;i++)
        {
            if(s.find(i*k)==s.end())
            {
                return i*k;
            }
        }
        return -1;
    }
};