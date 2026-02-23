class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> st;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            temp+=s[i];
            if(temp.size()==k)
            {
                st.insert(temp);
            temp.erase(0,1);
            }
        }

        if(st.size()==pow(2,k))
        {
            return true;
        }
        return false;
    }
};