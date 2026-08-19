class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<bool>> mp;
        for(auto it:reservedSeats)
        {
            int row=it[0];
            int seat=it[1];
            if(!mp.count(row))
            {
                mp[row]=vector<bool>(10,true);

            }
            mp[row][seat]=false;
        }
       int count=0;
       for(auto it:mp)
       {
           vector<bool>& temp=it.second;
           if(temp[2]==true && temp[3]==true && temp[4]==true && temp[5]==true)
           {
            count++;
            temp[4]=false;
            temp[5]=false;
           }
           if(temp[4]==true && temp[5]==true && temp[6]==true && temp[7]==true)
           {
            count++;
            temp[6]=false;
            temp[7]=false;
           }
           if(temp[6]==true && temp[7]==true && temp[8]==true && temp[9]==true)
           {
            count++;
           }
       }
       int remaining=n-mp.size();
       int for_remaining=remaining*2;
       count+=for_remaining;

       return count;

    }
};