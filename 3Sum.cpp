class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k;
        int count=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>> m;
        int n=nums.size();
        i=0;
        k=n/2;
        j=n-1;
        for(i=0;i<n;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for(j=i+1;j<n-1;j++)
            {
                if(j>i+1)
                    {
                        if ( nums[j] == nums[j - 1] && j<n-1) {continue;}
                    }
                 //if ( nums[j] == nums[j - 1]) continue;
                 k=j+1;
                while(k<n)
                {
                    // if ( nums[k] == nums[k - 1]) break;
                if(nums[i]==(-1*(nums[j]+nums[k])))
                {
                    if(k>j+1 && nums[k] == nums[k - 1] && k<n-1)
                    {
                        k++;
                    }
                    else
                    {
                    m.push_back({nums[i], nums[j], nums[k]});
                    break;
                    }
                }
                k++;
                }
            }
        }
        return m;
    }
};
