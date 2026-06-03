class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int tot=0;
        int zero=0;
        int neg=0;
        int pos=0;
        for(int x:arr)
        {
            tot+=x;
           
        }
        
        if(tot%3!=0)
        {
            return false;
        }
        
        int div=tot/3;
        int checksum=0;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            checksum+=arr[i];
            if(checksum==div)
            {
                checksum=0;
                count++;
            }
        }
        return count>=3;
    }
};