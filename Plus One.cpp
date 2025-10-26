class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        vector<int> inverse;
        int n = digits.size() - 1;
        for (int i = n; i >= 0; i--) {
            int val = digits[i] + carry;
            if (val == 10) {
                inverse.push_back(0);
                carry = 1;
            } else {
                inverse.push_back(val);
                carry = 0;
            }
        }
        if (carry == 1) inverse.push_back(1);

        reverse(inverse.begin(), inverse.end());
        return inverse;
    }
};
