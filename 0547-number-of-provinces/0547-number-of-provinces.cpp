class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int provinces=0;
        int V=isConnected.size();

        vector<int> visited(V,0);
       for(int i=0;i<V;i++)
       {
        if(visited[i]==0)
        {
            provinces++;
        }
        queue<int> q;
        q.push(i);
        visited[i]=1;
        while(!q.empty())
        {
            int p=q.front();
            q.pop();
            for(int j=0;j<V;j++)
            {
                if(isConnected[p][j]==1 && visited[j]==0)
                {
                visited[j]=1;
                q.push(j);
                }
            }
        }
       }
       return provinces;

    }
};