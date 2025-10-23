class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        if(n==2) return (nums[0]>nums[1])?(0):(1);
        int i=0;
        for(i=1;i<n-1;i++)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) return i;
        }
        if(nums[i]>nums[i-1]) return i;//if given vector has the peak value at as its last element
        else return 0;
    }
};
