class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp=arr;
        map<int,int>s;
        sort(temp.begin(),temp.end());
        for(int x:temp)
        {
         if(s.find(x)==s.end()) s[x]=s.size()+1;
         else continue;
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=s[arr[i]];
        }
        return arr;
    }
};