class Solution {
public:
    vector<string> ans;
    void func(int n,vector<string>& input,string temp)
    {
        if(temp.length()==n)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<input.size();i++)
        {
           if(temp.empty() || temp.back()!=input[i][0])
           {
            func(n,input,temp+input[i]);
           }
        }


    }
    string getHappyString(int n, int k) {
        vector<string> s={"a","b","c"};
        func(n,s,"");
        sort(ans.begin(),ans.end());
        if(ans.size()<k)
        {
            return "";
        }
            return ans[k-1];
    }
};