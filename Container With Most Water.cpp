class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int n=height.size();
        int right = n-1;
        int area=0;
        int result=0;
        while(left<right)
        {
            int x= (height[left]>height[right])?(x=height[right]):(x=height[left]);
            area=x * ( right- left);
            if(area>result)
            {
                result=area;
            }
            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return result;
    }
};
