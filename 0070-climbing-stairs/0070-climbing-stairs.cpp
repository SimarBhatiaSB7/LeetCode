class Solution {
private:
    int func(int n, std::vector<int>& res) {
        if (n == 0 || n == 1) {
            return 1;
        }
        if (res[n] != -1) {
            return res[n];
        }
        return res[n] = func(n - 1, res) + func(n - 2, res);
    }

public:
    int climbStairs(int n) {
        std::vector<int> res(n + 1, -1);
        return func(n, res);
    }
};