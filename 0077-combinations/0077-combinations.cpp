class Solution {
public:
    vector<vector<int>> ans;
    void comp(vector<int>& temp,vector<int>& nums,int index,int k)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        if(index>=nums.size())
        {
            return;
        }
        temp.push_back(nums[index]);
        comp(temp,nums,index+1,k);

        temp.pop_back();

        comp(temp,nums,index+1,k);

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<int> nums;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
        comp(temp,nums,0,k);
        return ans;
    }
};