class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
    int pos = 0;

   
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < pivot) {
            int temp = nums[i];

            for (int j = i; j > pos; --j)
                nums[j] = nums[j - 1];

            nums[pos++] = temp;
        }
    }

    for (int i = pos; i < nums.size(); i++) {
        if (nums[i] == pivot) {
            int temp = nums[i];

            for (int j = i; j > pos; --j)
                nums[j] = nums[j - 1];

            nums[pos++] = temp;
        }
    }

    return nums;
}
};