class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char> r;
        unordered_map<char,string> m;
        int i=0;
        string temp="";
        int count=0;
        int n=pattern.length();
        int N=s.length();
        for(i=0;i<n;i++)
        {
            while(count < N && s[count]==' ') count++;
            while(count < N && s[count]!=' ')
            {
                temp+=(s[count]);
                if(count<N-1)
                {
                    count++;
                }
                else
                {
                    count++;
                    break;
                }
            }
            if(temp.empty()) return false;

            if(m.count(pattern[i])==0)
            {
                if (r.count(temp) && r[temp] != pattern[i]) return false; 
                m[pattern[i]] = temp;
                r[temp] = pattern[i];
            }
            else
            {
                if(m[pattern[i]]==temp)
                {

                }
                else
                {
                    return false;
                }
            }
            temp="";
        }

        // check for extra words
        while(count < N && s[count]==' ') count++;
        if(count<N) return false;

        return true;
    }
};
