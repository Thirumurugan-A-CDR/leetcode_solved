class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int k=0;
        int m=0;
        while(k<nums1.size() && m<nums2.size())
        {
            if(nums1[k]==nums2[m])
            {
                return nums1[k];
            }
            else if(nums1[k]>nums2[m])
            {
                m++;
            }
            else
            {
                k++;
            }
        }
        return -1;
    }
};