class Solution {
public:
    int minPartitions(string n) {
        int maxval=0;
        for(int i=0;i<n.length();i++)
        {
             maxval=max(maxval,(n[i]-'0'));
        }
        return maxval;
    }

};