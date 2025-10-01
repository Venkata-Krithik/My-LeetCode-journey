//This may seem as if I am hardcoding but this is how I usually convert numbers into roman numerals, then I thought this is stupid and tried using a hashmap and found out this is the most memory efficient
//and the fastest way to solve it, trust me even I was surprised, had this been a verilog code I would think a million times before writing an extra if condition but it is not so I went ahed with this because the max possible value of num was 3999
class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        int rem = num / 1000;
        if (rem > 0) {
            s.append(rem, 'M');  
            num -= rem * 1000;   
        }
        if (num >= 900) {
            s += "CM";
            num -= 900;
        }
        if (num >= 500) {
            s += "D";
            num -= 500;
        }
        if (num >= 400) {
            s += "CD";
            num -= 400;
        }
        rem = num / 100;
        if (rem > 0) {
            s.append(rem, 'C');
            num -= rem * 100;
        }
        if (num >= 90) {
            s += "XC";
            num -= 90;
        }
        if (num >= 50) {
            s += "L";
            num -= 50;
        }
        if (num >= 40) {
            s += "XL";
            num -= 40;
        }
        rem = num / 10;
        if (rem > 0) {
            s.append(rem, 'X');
            num -= rem * 10;
        }
        if (num == 9) {
            s += "IX";
            num -= 9;
        }
        if (num >= 5) {
            s += "V";
            num -= 5;
        }
        if (num == 4) {
            s += "IV";
            num -= 4;
        }
        if (num > 0) {
            s.append(num, 'I');
        }
        return s;
    }
};
