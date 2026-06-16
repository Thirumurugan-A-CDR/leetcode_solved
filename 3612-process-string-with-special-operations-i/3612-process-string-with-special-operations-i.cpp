class Solution {
public:
    string processStr(string s) {
        string result="";
        for(auto it:s)
        {
            if(it>='a' && it<='z')
            {
                result+=it;
            }
            else if(it=='#')
            {
                result+=result;
            }
            else if(it=='*')
            {

                if(result!="")
                {
                   result.pop_back();
                }
            }
            else
            {
                reverse(result.begin(),result.end());
            }
        }

        return result;
    }
};