class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> c=heights;
        sort(c.begin(),c.end());
        int count=0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=c[i])
            {
                count++;
            }
        }
        return count;
    }
};