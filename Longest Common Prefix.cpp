class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string s,k="";
        int i;
        if(n==0)
        {
            k="";
        }
        else if(n==1)
        {
            k=strs[0];
        }
        else
        {
            s=strs[0];
            char temp=s[0];
            int j=0;
            while(j<s.size() )
            {
                for(i=1;i<n;i++)
                {   
                    if(s[j]!=strs[i][j])
                    {
                        return k;
                    }
                }
                k=k.insert(k.size(),1,s[j]);
                j++;

            }        
               // else break;
            }
            return k;

        }
    
};
