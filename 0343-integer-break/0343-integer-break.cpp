class Solution {
public:
long long maxi=1;

void func(int n,vector<int>& nums,long long curpro,int index,int cursum)
{

 

   if(cursum>n)
   {
    return;
   }
   if(cursum==n)
  {
   maxi=max(maxi,curpro);
   return;
  }
    
   
    
   for(int i=index;i<nums.size();i++)
   {
     func(n,nums,curpro*nums[i],i,cursum+nums[i]);
   }


}

    int integerBreak(int n) {
        if(n<=2) return 1;
        vector<int> nums;
        for(int i=1;i<n;i++)
        {
            nums.push_back(i);
        }
     
       func(n,nums,1,0,0);

       return maxi;
    }
};