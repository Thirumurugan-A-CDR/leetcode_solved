class Solution {
public:
    vector<vector<int>> ans;
    void perm(vector<int>& temp,int index,vector<int>& can,int target,int sum)
    {
        if(sum==target)
        {
            ans.push_back(temp);
            return;
        }

        if(sum>target)
        {
            return;
        }

        for(int i=index;i<can.size();i++)
        {

            temp.push_back(can[i]);
            perm(temp,i,can,target,sum+can[i]);

            temp.pop_back();
        }


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      ans.clear();
      vector<int> temp;
      perm(temp,0,candidates,target,0);  
      return ans;
    }
};