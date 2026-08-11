class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long res = 0;
        for (char ch : columnTitle) {
            res = res * 26 + (ch - 'A' + 1);
        }
        return res;
    }
};