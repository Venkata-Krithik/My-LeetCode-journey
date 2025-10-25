//This problem could have had an easier solution but the initial solution i came up with ran correctly for the 3 test cases and after submitting it i found a few bugs and I started rectifying them as i found them
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;
        int n=nums.size();
        vector<int> empty;empty.push_back(-1);empty.push_back(-1);
        if(n==0) return empty;
        if(n==1 && nums[0]==target){empty.clear();empty.push_back(0);empty.push_back(0);return empty;}
        else if(n==1 && nums[0]!=target){return empty;}
        int mid=n/2;
        vector<int> out;
        i=mid;
        if(nums[mid]==target)
        {
            while(i>=0 && target==nums[i]) i--;
            out.push_back(i+1);
            i= mid;
            while(i<n && target==nums[i]) i++;
            out.push_back(i-1);
            
        }
        else if(nums[mid]<target)
        {
            for(i=mid+1;i<n;i++)
            {
                if(nums[i]==target) 
                {
                    out.push_back(i);
                    while(i<n && target==nums[i]) i++;
                    out.push_back(i-1);
                    break;
                }
                
            }
            
        }
        else if(nums[mid]>target)
        {
            for(i=0;i<=mid;i++)
            {
                if(nums[i]==target)
                { 
                    out.push_back(i);
                    while(i<n && target==nums[i]) i++;
                    out.push_back(i-1);
                    break;
                }
                
            }    
        }
        if(out.size()==1) out.push_back(out[0]);
        if(out.empty()) return empty;
        else return out;
    }
};
