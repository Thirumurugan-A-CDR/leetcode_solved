class Solution {
public:
    int countSegments(string s) {
     stringstream ss(s);
     string ans="";
     vector<string> str;
     while(ss>>ans)
     {
        str.push_back(ans);
     }   
     return str.size();
    }
};