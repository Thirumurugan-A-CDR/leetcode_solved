class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end(),[] (auto it1,auto it2){
        if(it1[0]==it2[0])
        {
            return it1[1]>it2[1];
        }

        return it1[0]<it2[0];
    });
       stack<pair<int,int>> st; 
       for(auto it:intervals)
       {
        if(!st.empty() && st.top().first<=it[0] && st.top().second>=it[1])
        {
           continue;
        }
            st.push({it[0],it[1]});
        }
       return st.size();
    }
};