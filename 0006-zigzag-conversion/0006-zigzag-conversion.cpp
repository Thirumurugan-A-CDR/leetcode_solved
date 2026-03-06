class Solution {
public:
    string convert(string s, int numRows) {
        int secondval;
        if(numRows==1)
        {
            return s;
        }
        else
        {
            secondval=numRows-2;
        }
        vector<vector<char>> ansmatrix;
        bool normal=true;
        for(int i=0;i<s.length();i++)
        {
            vector<char> ss(numRows,' ');
            if(normal)
            {
                for(int j=0;j<numRows && i<s.length();j++,i++)
                {
                    ss[j]=s[i];
                }
            i=i-1;
            }
            else
            {
                for(int j=numRows-2;j>=1 && i<s.length();j--,i++)
                {
                    ss[j]=s[i];
                }
            i=i-1;
            }

            ansmatrix.push_back(ss);
            normal=!normal;
        }
    string ans;
    for(int j=0;j<ansmatrix[0].size();j++)
    {
        for(int i=0;i<ansmatrix.size();i++)
     {
          if(ansmatrix[i][j]!=' ')
          {
              ans+=ansmatrix[i][j];
         }
    }
    }
    return ans;
    }
    };