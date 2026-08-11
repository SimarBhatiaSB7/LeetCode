class Solution {
public:
    int bulbSwitch(int n) {
        int sum = 1, i = 1, ans = 0;
        while (sum <= n) {
            ans++;
            i += 2;
            sum += i;
        }
        return ans;
    }
};