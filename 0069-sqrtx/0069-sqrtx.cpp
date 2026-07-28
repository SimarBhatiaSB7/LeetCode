class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        int n = x / 2;      
        for (long long i = 1; i <= n; i++) {
            if (i * i == x) {
                return i;
            }
            if (i * i > x) {
                return i - 1;
            }
        }
        return n;
    }
};