class Solution {
private:
    int getGCD(int x, int y) {
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        return x;
    }

public:
    bool canMeasureWater(int x, int y, int target) {
        if (target > x + y) return false;
        return target % getGCD(x, y) == 0;
    }
};