class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int n=nums.size();
        int start_index=0;
        if(n==1) return((target==nums[0])?( 0):( -1));
        while(i<n-1)
        {
            if(nums[i]>nums[i+1]) start_index=i+1;
            i++;
        }
        i=0;
        if(target>nums[n-1])
        {
            while(i<start_index) 
            {
                if(nums[i]==target) return i;
                i++;
            }
        }
        else
        {
            i=start_index;
            while(i<n) 
            {
                if(nums[i]==target) return i;
                i++;
            }
        }
        return -1;
    }
};
