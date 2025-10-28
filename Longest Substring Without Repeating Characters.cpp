#include<string.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=1, count=0;
        int i=0;
        int max=INT_MIN;
        unordered_map<char,int> m;
        int n=s.length();
        if(n==0) return 0;
        else if(n==1) return 1;
        m[s[0]]++;
        while(i<n && s[i]==s[0]) i++;
        if(i==n) return 1;
        while(right<n)
        {
            while (m[s[right]] > 0) {
                m[s[left]]--;
                left++;
            }

            m[s[right]]++; 
            count = right - left + 1;
            if (count > max) max= count;

            right++;
        }
        if(max==0) return n;
       
        return max;
    }
    
};
