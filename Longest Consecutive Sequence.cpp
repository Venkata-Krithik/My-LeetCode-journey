class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        int i=0;
        int count=1;
        int max=INT_MIN;
        unordered_map<int,int> m;
        sort(nums.begin(),nums.end());
        m[0]=count;
        for(i=1;i<n;i++)
        {
                if(nums[i]==nums[i-1]) continue;   
                if(nums[i]==nums[i-1]+1) 
                {count++;m[i]=count;}
                else {count=1;}
            
        }
        for(i=0;i<n;i++)
        {
            if(max<m[i]) max=m[i];
        }
        return max;
    }
};
