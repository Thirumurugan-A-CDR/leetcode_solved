class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
      unordered_map<int,int> s;
      for(int i=0;i<nums.size();i++)
      {
        s[nums[i]]++;
      }
        sort(nums.begin(),nums.end(),[&](int it1,int it2){
            if(s[it1]==s[it2])
            {
                return  it1>it2;
            }
            return s[it1]<s[it2];
        });
    return nums;
       }
};