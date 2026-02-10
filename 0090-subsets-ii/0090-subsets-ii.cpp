class Solution {
public:
        vector<vector<int>> sol;
        set<vector<int>> dupli;
        void func(int index,vector<int>& nums,vector<int>& temp)
        {
            if(index==nums.size())
            {
                 if(dupli.insert(temp).second)
                 {
                    sol.push_back(temp);
                 }
                 return;
            }
            temp.push_back(nums[index]);
            func(index+1,nums,temp);
            temp.pop_back();
            func(index+1,nums,temp);
        }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        vector<int> temp;
         func(0,nums,temp);
       return sol;
    }
};