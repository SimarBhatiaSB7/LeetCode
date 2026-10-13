class Solution {
public:
    long long maxAlternatingSum(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end(), [](int a, int b) {
            return std::abs(a) > std::abs(b);
        });
        
        long long maxScore = 0;
        int n = nums.size();
        int numPositives = (n + 1) / 2; 
        
        for(int i = 0; i < n; i++) {
            long long square = (long long)nums[i] * nums[i]; 
            if(i < numPositives) {
                maxScore += square;
            } else {
                maxScore -= square;
            }
        }
        
        return maxScore;
    }
};