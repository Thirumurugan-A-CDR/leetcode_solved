class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int costing_amount=0;
        if(cost.size()==0)
        {
            return 0;
        }
        if(cost.size()==1)
        {
            return cost[0];
        }
        if(cost.size()==2)
        {
            return  cost[0]+cost[1];
        }
        sort(cost.rbegin(),cost.rend());
        int i=0;
        for( i=0;i<cost.size() && i+3<=cost.size();i+=3)
        {
            costing_amount+=cost[i];
            costing_amount+=cost[i+1];
        }
        while(i<cost.size())
        {
            costing_amount+=cost[i];
            i++;
        }
        return costing_amount;


    }
};