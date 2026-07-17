class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> myarr(edges.size()+2,0);
        
        for(int i=0;i<edges.size();i++)
        {
            auto it=edges[i];
            myarr[it[0]]++;
            myarr[it[1]]++;

        }
        int centernode;
        int max=0;
        for(int i=1;i<=edges.size()+1;i++)
        {
           if(myarr[i]>max)
           {
            max=myarr[i];
            centernode=i;
           }
        }
        return centernode;
    }
};