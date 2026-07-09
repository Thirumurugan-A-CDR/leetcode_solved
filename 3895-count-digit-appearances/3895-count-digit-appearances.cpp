class Solution {
public:
  int find(int n,int digit)
  {
    int count=0;
    while(n>0)
    {
        int dig=n%10;
        if(dig==digit) count++;
        n=n/10;
    }
    return count;
  }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int tot=0;
        for(int  val:nums)
        {
            tot+=find(val,digit);
        }
      return tot;
    }
};