#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string originalDigits(string s) {
        map<char,int> mp;

        for(char c:s)
        {
            char xx=tolower(c);
            mp[xx]++;
        }

        vector<int> nums(10,0);
        string nus[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

        int order[10]={0,2,4,6,8,3,5,7,1,9};

        for(int x=0;x<10;x++)
        {
            int i=order[x];

            int mini=INT_MAX;
            string number=nus[i];

            for(int j=0;j<number.length();j++)
            {
                char firstchar=number[j];
                mini=min(mini,mp[firstchar]);
            }

            if(mini==0)
                continue;

            nums[i]=mini;

            for(int k=0;k<number.size();k++)
            {
                char f=number[k];
                mp[f]-=mini;

                if(mp[f]==0)
                {
                    mp.erase(f);
                }
            }
        }

        string ans="";

        for(int i=0;i<10;i++)
        {
            if(nums[i]!=0)
            {
                for(int k=0;k<nums[i];k++)
                {
                    ans += char(i + '0');
                }
            }
        }

        return ans;
    }
};