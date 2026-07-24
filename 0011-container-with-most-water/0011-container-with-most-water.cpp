class Solution {
public:
    int maxArea(vector<int>& height) {
     int left=0;
     int right=height.size()-1;
     int maxarea=INT_MIN;
     while(left<right)
     {
        int witdh=right-left;

        int temp_ans=min(height[left],height[right])*witdh;

        maxarea=max(maxarea,temp_ans);

        if(height[left]<height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
     }
     return maxarea;
    }
};