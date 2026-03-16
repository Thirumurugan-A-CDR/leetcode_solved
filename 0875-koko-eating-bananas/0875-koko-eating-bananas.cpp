class Solution {
public:
bool func(vector<int>& piles,int h,int mid)
{
    long long hours=0;
    for(int i=0;i<piles.size();i++)
    {
        if(piles[i]<=mid)
        {
            hours+=1;
        }
        else
        {
            hours+=piles[i]/mid;
            int rr=piles[i]%mid;
            if(rr!=0)
            {
                hours+=1;
            }
        }
        if(hours>h)
        {
            return false;
        }
    }
        if(hours<=h)
        {
            return true;
        }
        return false;
}


    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=r;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(func(piles,h,mid))
            {
                 ans=mid;
                 r=mid-1;
                 
            }
            else
            {
                    l=mid+1;
            }
        }
        return ans;
    }
};