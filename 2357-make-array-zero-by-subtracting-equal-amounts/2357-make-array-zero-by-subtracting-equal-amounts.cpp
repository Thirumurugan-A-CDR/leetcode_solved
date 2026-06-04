class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        set<int> s;
        for(int x:nums)
        {
            if(x!=0 && s.insert(x).second)
            {
                count++;
            }
        }
    return count;
    }
};