class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int dis=0;
        int rcount=0;
        int lcount=0;
        for(char c:moves)
        {
            if(c=='R')
            {
                rcount++;
            }
            else if(c=='L')
            {
                lcount++;
            }
        }
        (rcount>lcount)?replace(moves.begin(), moves.end(), '_', 'R'):replace(moves.begin(), moves.end(), '_', 'L');
        for(int i=0;i<moves.length();i++)
        {
            if(moves[i]=='R')
            {
                dis++;
            }
            else
            {
                dis--;
            }
        }
        return abs(dis);
    }
};