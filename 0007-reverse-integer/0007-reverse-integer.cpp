class Solution {
public:
    int reverse(int x) {
        int y;
        long res = 0;
        while (x != 0) {
            y = x % 10;
            res = (res * 10) + y;
            x = x / 10;
        }
        
        if (res < -2147483648 || res > 2147483647) {
            return 0;
        }
        
        return res;
    }
};