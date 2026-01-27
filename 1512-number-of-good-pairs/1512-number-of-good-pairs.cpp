class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int,int> sol;
       for(int n:nums)
       {
        sol[n]++;
       } 
       int ans=0;
       for(auto ob:sol)
       {
        int count=ob.second;
        ans+=count*(count-1)/2;
       }
       return ans;
    }
};