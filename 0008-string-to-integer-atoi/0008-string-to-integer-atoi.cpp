class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        long long num = 0;
        int sign = 1;

        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }
        while (i < n) {
            int ascii = (int)s[i];

            if (ascii < 48 || ascii > 57) {
                break;
            }
            int digit = ascii - 48;
            num = num * 10 + digit;
            if (sign * num <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * num >= INT_MAX) {
                return INT_MAX;
            }
            i++;
        }
        return sign * num;
    }
};