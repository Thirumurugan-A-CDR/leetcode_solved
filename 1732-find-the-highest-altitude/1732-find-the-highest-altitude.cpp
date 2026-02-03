class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prefixsum=0;
        vector<int> sol;
        sol.push_back(0);
        for(int i=0;i<gain.size();i++)
        {
            prefixsum+=gain[i];
            sol.push_back(prefixsum);
        }
        int max=INT_MIN;
        for(int val:sol)
        {
            if(max<val)
            {
                max=val;
            }
        }
        return max;
    }
};