class Solution {
public:
    set<vector<int>> dupli;
    void perm(vector<bool>& used,vector<int>& nums,vector<int>& temp)
    {
        if(temp.size()==nums.size())
        {
            dupli.insert(temp);
            return;
        }
      for(int i=0;i<nums.size();i++)
       { 
        if(used[i])
        {
            continue;
        }
        used[i]=true;
        temp.push_back(nums[i]);
        perm(used,nums,temp);
        temp.pop_back();
        used[i]=false;
     
       }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<bool> used(nums.size(),false);
        vector<int> temp;
        perm(used,nums,temp);
        for(vector<int> t:dupli)
        {
            ans.push_back(t);
        }
        return ans;
    }
};