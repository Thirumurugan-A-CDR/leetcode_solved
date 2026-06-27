class Solution {
public:
    int maxDistance(string moves) {
        int right=0;
        int left=0;
        int up=0;
        int down=0;

        int under=0;

        for(auto it:moves)
        {
            if(it=='U')
            {
                up++;
            }
            else if(it=='L')
            {
                left++;
            }
            else if(it=='R')
            {
                right++;
            }
            else if(it=='D')
            {
                down++;
            }
            else
            {
                under++;
            }
        }

        return (abs(right-left)+abs(up-down)+under);
    }
};