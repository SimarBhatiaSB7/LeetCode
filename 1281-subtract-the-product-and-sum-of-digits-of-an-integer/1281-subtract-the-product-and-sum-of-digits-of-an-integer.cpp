class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> digits;
        int x;
        while(n != 0){
            x = n%10;
            digits.push_back(x);
            n = n/10;
        }
        int sum = std::accumulate(digits.begin(), digits.end(), 0);
        int product = std::accumulate(digits.begin(), digits.end(), 1, std::multiplies<int>());
        return product - sum;
    }
};