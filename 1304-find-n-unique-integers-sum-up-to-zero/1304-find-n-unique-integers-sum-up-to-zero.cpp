class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> s;
        if(n%2==0)
        {
            int d=n/2;
            for(int i=1;i<=d;i++)
            {
                s.push_back(i);
            }
            for(int i=-1;i>=-d;i--)
            {
                s.push_back(i);
            }
        }
        else
        {
            s.push_back(0);
            int size=n-1;
            int d=size/2;
            for(int i=1;i<=d;i++)
            {
                s.push_back(i);
            }
            for(int i=-1;i>=-d;i--)
            {
                s.push_back(i);
            }
        }
        return s;
    }
};