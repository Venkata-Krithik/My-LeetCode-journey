class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long power=1;
        if(n%2!=0 && n>1) return false;
        if(n<1) return false;
        while(power<=n)
        {
            if(power==n) return true;
            power*=2;
        }
        return false;
    }
};
