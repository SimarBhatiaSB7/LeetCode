class Solution {
private:
    int digsum(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }    
public:
    int countLargestGroup(int n) {
        int max = 0, count = 0;
        vector<int> sum(37, 0); 

        for (int i = 1; i <= n; i++){
            sum[digsum(i)]++;
        }
        
        for (int i = 1; i < sum.size(); i++) {
            if (sum[i] > max) {
                max = sum[i];
                count = 1;
            } 
            else if (sum[i] == max) {
                ++count;
            }
        }
        return count;
    }
};