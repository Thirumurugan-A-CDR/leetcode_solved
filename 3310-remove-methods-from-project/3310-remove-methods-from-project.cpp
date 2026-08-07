class Solution {
public:

void dfs(vector<vector<int>>& adj,int node,vector<int>& vis)
{
     if(vis[node]==-1)
     {
     vis[node]=1;
        for(int node1:adj[node])
        {
            dfs(adj,node1,vis);
        } 
     }
 }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
    vector<vector<int>> adj(n);
    vector<int> vis(n,-1);
    vector<int> ans;
       for(auto it:invocations)
       {
        adj[it[0]].push_back(it[1]);
       } 
       dfs(adj,k,vis);

       for(auto it:invocations)
       {
          int a=it[0];
          int b=it[1];

          if(vis[a]==-1 && vis[b]==1)
          {
            for(int i=0;i<n;i++)
            {
                ans.push_back(i);
            }
            return ans;
          }
       }
       for(int i=0;i<n;i++)
       {
        if(vis[i]==-1)
        {
          ans.push_back(i);
        }
       }
       return ans;
    }

};