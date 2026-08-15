class Solution {
public:
    int digitFrequencyScore(int n) {
        int res;
        while(n > 0){
            res += n%10;
            n /= 10;
        }
        return res;
    }
};