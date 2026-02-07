class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int i=0,sum=0,min=INT_MAX;
    sort(nums.begin(),nums.end());
    int left=i+1;
    int curr=0, diff=INT_MAX;
    int n=nums.size();
    int right=n;
    for(i=0;i<n;i++)
    {
        left=i+1;
        right=n-1;
        while(right>left)
        {
            sum=nums[i]+nums[left]+nums[right];
            curr=target-sum;
            if(abs(curr)<abs(diff) || curr==0)
            {
                min= sum;
                diff= target - min;
            } 
            if(target>sum)left++;
            else right--;
        }
    }
    return min;
    }
};
