class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int candies=candyType.size()/2;
        unordered_set<int> s;
        for(int i=0;i<candyType.size();i++)
        {
                s.insert(candyType[i]);
        }
        if(s.size()>=candies) return candies;
        else return s.size();
    }
};