class Solution {
public:
   string func(string my)
   {
    string stringbin="";
    int n=stoi(my);
    if(n==0) return "0";
    while(n>0)
    {
     stringbin=char('0'+(n%2))+stringbin;   
       n=n/2;
    }
    return stringbin;
   }
    string convertDateToBinary(string date) {
    vector<string> res;
    string cur;
    string ansstring="";
    for (char c : date) {
        if (c == '-') {
            res.push_back(cur);
            cur.clear();
        } else {
            cur += c;
        }
    }
    res.push_back(cur);
    for(int i=0;i<3;i++)
    {
        ansstring+=func(res[i])+'-';
    }
    ansstring.pop_back();
    return ansstring;
    }
};