class Solution {
public:
    vector<int> minOperations(string boxes) {
      vector<int> ans(boxes.size());
      for(int i=0;i<boxes.size();i++)
      {
        int anss=0;
        for(int j=0;j<boxes.size();j++)
        {
            if(boxes[j]=='1' && i!=j)
            {
                anss+=abs(i-j);
            }
            ans[i]=anss;
        }
        ans;
      }
      return ans;
    }
};