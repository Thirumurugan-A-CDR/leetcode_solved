class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {

        int n = nums.size();

        vector<pair<int,int>> arr;

        for(int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int first = 0;

        while(first < n) {

            int last = first + 1;

            while(last < n &&
                  arr[last].first - arr[last - 1].first <= limit) {
                last++;
            }

            vector<int> index;

            for(int i = first; i < last; i++) {
                index.push_back(arr[i].second);
            }

            sort(index.begin(), index.end());


            for(int i = 0; i < index.size(); i++) {
                nums[index[i]] = arr[first + i].first;
            }

            first = last;
        }

        return nums;
    }
};