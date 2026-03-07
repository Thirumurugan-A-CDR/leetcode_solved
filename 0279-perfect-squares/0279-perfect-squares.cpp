class Solution {
public:
    int func(int index,int target,vector<int>&sqr,int c,vector<int>& vis)
    {

       if(target==0)
        {
            return 0;
        }

        if(target<0)
        {

            return 1e5;
        }

        if(vis[target]!=-1)
        {
            return vis[target];
        }


        int mini=INT_MAX;
        for(int i=0;i<sqr.size();i++)
        {
            mini=min(mini,1+func(i,target-sqr[i],sqr,c+1,vis));

        }
        return vis[target]=mini;
    }
    int numSquares(int n) {
        vector<int> sqr;
        vector<int> vis(n+1,-1);
        for(int i=1;i*i<=n;i++)
        {
                sqr.push_back(i*i);
         }
        return func(0,n,sqr,0,vis);
    }
};