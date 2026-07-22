class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        map<int,string> mapping;
        vector<int> temp=score;
        sort(temp.rbegin(),temp.rend());
        int topthree=1;
        for(auto it:temp)
        {
           
                if(topthree==1) mapping[it]="Gold Medal";
                else if(topthree==2) mapping[it]="Silver Medal";
                else if(topthree==3){
                    mapping[it]="Bronze Medal";
                }
                else
                {
                    mapping[it]=to_string(topthree);
                }

                topthree++;
        }
        for(auto it:score)
        {
            ans.push_back(mapping[it]);
        }
        return ans;
    }
};