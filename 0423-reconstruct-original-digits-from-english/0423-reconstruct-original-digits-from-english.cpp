class Solution {
public:
    string originalDigits(string s) {
        map<char,int> mp;

        for(char c:s)
            mp[c]++;

        vector<int> nums(10,0);
        string nus[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

        int order[10]={0,2,4,6,8,3,5,7,1,9};

        for(int x=0;x<10;x++)
        {
            int i=order[x];

            int mini=INT_MAX;
            string number=nus[i];

            for(char c:number)
                mini=min(mini,mp[c]);

            if(mini==0)
                continue;

            nums[i]=mini;

            for(char c:number)
            {
                mp[c]-=mini;
                if(mp[c]==0)
                    mp.erase(c);
            }
        }

        string ans="";

        for(int i=0;i<10;i++)
        {
            for(int k=0;k<nums[i];k++)
                ans+=char(i+'0');
        }

        return ans;
    }
};