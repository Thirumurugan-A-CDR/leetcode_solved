class Solution {
public:
vector<string> ans;
 
bool check(string ss){
    stack<char> s;

    for(int i=0;i<ss.length();i++)
    {
        if(ss[i]=='(') s.push(ss[i]);
        else
        {
            if(s.empty()) return false;
            else if(ss[i]==')' && s.top()!='(') return false;

            s.pop();
        }

    }
    if(s.size()==0)
      return true;
    else return false;

}

void create(int maxlength,string curr)
{
    if(curr.length()==maxlength)
    {
       bool s=check(curr);
       if(s) ans.push_back(curr);
       return;
    }

    create(maxlength,curr+'(');
    create(maxlength,curr+')');


}
    vector<string> generateParenthesis(int n) {
        ans.clear();
        create(2*n,"");
        return ans;
    }
};