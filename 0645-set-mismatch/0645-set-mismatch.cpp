class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> s;
        set<int> storage;
        vector<int> ans;

        int n = nums.size();

        for(int i = 1; i <= n; i++) {
            s.insert(i);
        }

        for(int i = 0; i < n; i++) {

            if(!storage.insert(nums[i]).second) {
                ans.push_back(nums[i]);
            }

            s.erase(nums[i]);
        }

        ans.push_back(*s.begin());

        return ans;
    }
};