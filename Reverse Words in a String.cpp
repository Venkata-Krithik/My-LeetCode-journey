//The strategy was to reverse the entire string and then reverse each word while accounting for spaces
class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        int left=0,right=0;
        while(s[i]== ' ')//This while loop removes the leading spaces
        {
            s.erase(i,1);
        }
        reverse(s.begin(), s.end());//String is reversed
        while(s[i]== ' ')//removes the leading spaces of the reversed string, i.e trailing spaces of the original string
        {
            s.erase(i,1);
        }
        n=s.size();
        while(i<n)
        {
            right=i;
            if(i>0)
            {
                if(s[i-1]==' '&& s[i]==' ')//eliminates multiple spaces between two words
                {
                    s.erase(i-1,1);
                    n=s.size();
                    continue;
                    i--;
                }
            }
            if(s[right]==' ' )//reverses the word
            {
                reverse(s.begin()+left,s.begin()+right);
                left=right+1;
            }
           i++;
        }
        reverse(s.begin()+left,s.begin()+n);
        return s;
    }
};
