class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> s;
        for(int x:arr)
        {
            s.insert(x);
        }
        int m=0;
        vector<int> mis;
        for(int i=1;m<k;i++)
        {
           
            if(s.find(i)==s.end())
            {
                m++;
                mis.push_back(i);

            }
        }
        return mis[k-1];
    }
};