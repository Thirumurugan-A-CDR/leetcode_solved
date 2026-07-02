class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int> div;
        for(int i=0;i<=51;i++)
        {
            if(i%3==0)
            {
                div.push_back(i);
            }
        }
        int tot=0;
        for(int i:nums)
        {
            if(i%3==0) continue;
            int mini=INT_MAX;
            for(int j=0;j<div.size();j++)
            {
                if(i<div[j])
                {
                    int add=abs(div[j]-i);
                    int sub=abs(div[j-1]-i);
                    tot+=min(add,sub);
                    break;
                }
            }
        }
        return tot;
    }
};