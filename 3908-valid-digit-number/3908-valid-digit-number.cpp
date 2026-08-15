class Solution {
public:
    bool validDigit(int n, int x) {
        if (n == 0) {
            return x == 0 ? false : false; 
        }
        std::vector<int> digits;
        while (n > 0) {
            digits.push_back(n % 10);
            n /= 10;
        }
        if (digits.back() == x) {
            return false;
        }
        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] == x) {
                return true;
            }
        }
        return false;
    }
};