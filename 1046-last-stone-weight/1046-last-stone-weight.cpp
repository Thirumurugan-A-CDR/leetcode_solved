class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1) return stones[0];
        while(stones.size()!=1 && stones.size()!=0)
        {
        sort(stones.rbegin(),stones.rend());
            if(stones[0]==stones[1])
            {
                stones.erase(stones.begin());
                stones.erase(stones.begin());
            }
            else
            {
                stones[1]=stones[0]-stones[1];
                stones.erase(stones.begin());
            }
        }
        return (stones.size()==0)?0:stones[0];
    }
};