class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string> anscheck;
        int n=nums.size();
        queue<string> q;
        q.push("");
        while(!q.empty())
        {
            string ans1=q.front();
            q.pop();
            
            if(ans1.length()==n)
            {
                anscheck.push_back(ans1);
                continue;
            }

            q.push(ans1+"0");
            q.push(ans1+"1");
        }
        string notp="";
        int flag;
        for(int i=0;i<anscheck.size();i++)
        {
            flag=-1;
            for(int j=0;j<nums.size();j++)
            {
                if(anscheck[i]==nums[j])
                {
                    flag=1;
                }
            }
            if(flag==-1)
            {
                notp=anscheck[i];
                break;
            }

        }
            return notp;
    }
};