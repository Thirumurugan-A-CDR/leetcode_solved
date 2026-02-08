class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     map<int,int> count;
     vector<int> ans;
     int targetsize=nums.size()/3;
     for(int i=0;i<nums.size();i++)
     {
        count[nums[i]]++;
     }   
     for(const auto& [key,value]:count)
     {
        if(value>targetsize)
        {
            ans.push_back(key);
        }
     }
     return ans;
    }
};