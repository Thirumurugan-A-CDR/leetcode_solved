class Solution {
public:
    string getHint(string secret, string guess) {
        //secret is written and friend is gusissing 
        //corruct number and crt positions is bull
        //cows  are also present in the secret but in the wrong position
        //return the hint
        
        //the hint format xAyB
        //x->number of bulls

        //y->number of cows
        int bulls=0;
        int cows=0;
        int n=secret.size();
        for(int i=0;i<n;i++)
        {
                if(secret[i]==guess[i])
                {
                    bulls++;
                    guess[i]='-';
                    secret[i]='-';
                }
         }
            for(int i=0;i<n;i++)
            {
                if(secret[i]=='-')
                {
                    continue;
                }
                
                for(int j=0;j<n;j++)
                {
                    if(guess[j]=='-')
                    {
                        continue;
                    }
                    if(secret[i]==guess[j])
                        {
                        cows++;
                        guess[j]='-';
                         break;
                        }
                }
            }
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};