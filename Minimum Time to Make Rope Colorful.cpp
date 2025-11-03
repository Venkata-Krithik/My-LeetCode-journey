class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i=0;
        int out=0;
        int n=neededTime.size();
        for(i=0;i<n-1;i++)
        {
            if(colors[i]==colors[i+1]) 
            {
                out=out+((neededTime[i]<neededTime[i+1])?(neededTime[i]):neededTime[i+1]);
                neededTime[i+1]=((neededTime[i]>neededTime[i+1])?(neededTime[i]):neededTime[i+1]);
            }
        }
        return out;
    }
};
