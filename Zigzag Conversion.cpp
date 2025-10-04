//This question took a lot of time, I got the pattern wrong, I was assuming that there would be elements only near the middle elements because that was the clarity i got looking at the example questions
//After the test cases started to fail then I realized that there is a diagonal pattern
class Solution {
public:
    string convert(string s, int numRows) {
        string arr = "";
        int n = s.size();
        if (numRows == 1) return s;

        // keep your numRows==2 fast path
        if (numRows == 2) {
            int count = 0;
            while (count < n) { arr += s[count]; count += 2; }
            count = 1;
            while (count < n) { arr += s[count]; count += 2; }
            return arr;
        }

        int cycleLen = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) {
            int count = i;

            if (i == 0 || i == numRows - 1) {
                // top/bottom rows: just stride by cycleLen
                while (count < n) {
                    arr += s[count];
                    count += cycleLen;
                }
            } else {
                // middle rows: two-step pattern without flip
                while (count < n) {
                    arr += s[count];
                    count += 2 * (numRows - i - 1);   // down-diagonal jump

                    if (count < n) {
                        arr += s[count];
                        count += 2 * i;               // up-diagonal jump
                    }
                }
            }
        }
        return arr;
    }
};
