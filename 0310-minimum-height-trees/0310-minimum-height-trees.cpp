class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1)
        {
            return {0};
        }
        vector<vector<int>> adj(n);
         vector<int> degree(n,0);
        for(auto it:edges)
        {
            int a=it[0];
            int b=it[1];

            adj[a].push_back(b);
            adj[b].push_back(a);

            degree[a]++;
            degree[b]++;
        }
        queue<int> q;

        for(int i=0;i<n;i++)
        {
                if(degree[i]==1)
                {
                    q.push(i);
                }
        }

        int remain=n;
        while(remain>2)
        {
            int size=q.size();
            remain-=size;

            while(size--)
            {
                int node=q.front();
                q.pop();

                for(int val:adj[node])
                {
                        degree[val]--;
                        if(degree[val]==1)
                        {
                            q.push(val);
                        }


                }


            }
        }
        vector<int> ans;
        while(!q.empty())
        {
            int data=q.front();
            q.pop();
            ans.push_back(data);
        }
        return ans;    

    }
};