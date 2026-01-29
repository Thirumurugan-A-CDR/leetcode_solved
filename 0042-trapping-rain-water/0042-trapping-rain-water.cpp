class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=height.size()-1;
        int leftmax=0,rightmax=0;
        int totwater=0;
        while(left<right)
        {
            if(height[left]<height[right])
            {
                leftmax=max(leftmax,height[left]);
                totwater+=leftmax-height[left];
                left++;
            }
            else
            {
                rightmax=max(rightmax,height[right]);
                totwater+=rightmax-height[right];
                right--;
            }
        }
        return totwater;
    }
};