class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       vector<int> ans;
        
        int low1=to_string(low).size();
        int high1=to_string(high).size();
        
        for(int i=low1;i<=high1;i++)
        {

        for(int j=1;j+i-1<=9;j++)
        {
            int num=0;

            for(int k=j;k<j+i;k++)
            {
                num=num*10+k;
            }
      if(num>=low && num<=high) ans.push_back(num);
        }


        }
        return ans;
    }
};