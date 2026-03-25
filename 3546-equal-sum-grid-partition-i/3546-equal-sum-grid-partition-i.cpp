class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<int> rowsum;
        vector<int> colsum;
        long long tot=0;
        for(int i=0;i<grid.size();i++)
        {
            long long tempsum=0;
            for(int j=0;j<grid[i].size();j++)
            {
                tempsum+=grid[i][j];
            }
            tot+=tempsum;
            rowsum.push_back(tempsum);
        }
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<m;i++)
        {
            long long tempsum=0;
            for(int j=0;j<n;j++)
            {
                tempsum+=grid[j][i];
            }

            colsum.push_back(tempsum);
        }
    if(tot%2!=0)
    {
        return false;
    }
    long long target=tot/2;
    long long sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=rowsum[i];
        if(sum==target)
        {
          return true;
        }
    }
     sum=0;
    for(int i=0;i<m-1;i++)
    {
        sum+=colsum[i];
        if(sum==target)
        {
         return true;
        }
    }
    return false;
    }
};