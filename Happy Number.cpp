//For this problem the approach was, if the n is greater than 9 ie double digit, the individual squares will be added and checks for happy number, however if the n is single digit or at any step we get a single digit 
//I compareed that with 1 and 7, because they are the only single digit happy numbers, and if the n after some computation is single digit is equal to them then it is a happy number if not it is not a happy number
class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        if(n==1) return true;
        while(n>9)
        {
            while(n>0)
            {
                sum= sum+ (n%10)*(n%10);
                n=n/10;
            }
            if(sum==1)
            {
                return true;
            }
            n=sum;
            sum=0;
        }
        if(n==1 || n==7) return true;
        return false;
    }
};
