class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26,0);
        for(char c:text)
        {
            freq[c-'a']++;
        }

       int mini=INT_MAX;
       for(int i=0;i<26;i++)
       {
        if(i==1 || i==0 || i==11 || i==14 ||i==13)
        {

            if(i==11 || i==14) mini=min(mini,freq[i]/2);
            mini=min(mini,freq[i]);
        }
       }
       return mini;

    }
};