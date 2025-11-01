class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int i=0,count=0;
        int n= s.length();
        stack<char> open,close;
        unordered_map<int,int> m;
        while(i<n)
        {
            if(s[i]==')' && open.empty())
            {
                s.erase(i,1);
                continue;
            }
            else if(s[i]==')')
            { 
                close.push(s[i]);
                open.pop();
            }
            else if(s[i]=='(')
            {
                open.push(s[i]);
                m[count]=i;
                count++;
            }
            i++;
        }
        
            count--;
            while(!open.empty())
            {
                open.pop();
                s.erase(m[count],1);
                count--;
            }
        
        return s;
    }
};
