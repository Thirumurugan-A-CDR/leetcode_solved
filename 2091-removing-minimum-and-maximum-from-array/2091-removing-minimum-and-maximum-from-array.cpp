class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int n = nums.size();

        int minpos = 0;
        int maxpos = 0;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] < nums[minpos])
                minpos = i;

            if(nums[i] > nums[maxpos])
                maxpos = i;
        }

        int left = max(minpos, maxpos) + 1;

        int right = n - min(minpos, maxpos);

        int both = min(minpos, maxpos) + 1
                 + n - max(minpos, maxpos);

        return min({left, right, both});
    }
};