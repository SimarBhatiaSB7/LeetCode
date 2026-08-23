class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int sum1 = 0, sum2 = 0;
        int q1 = 0, q2 = 0;
        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                if (num[i] == '?') q1++;
                else sum1 += num[i] - '0';
            } else {
                if (num[i] == '?') q2++;
                else sum2 += num[i] - '0';
            }
        }
        if ((q1 + q2) % 2 != 0) {
            return true;
        }
        return 2 * (sum1 - sum2) + (q1 - q2) * 9 != 0;
    }
};