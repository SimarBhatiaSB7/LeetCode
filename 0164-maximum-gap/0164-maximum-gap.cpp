class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) {
            return 0;
        }

        int maxdiff = 0;
        std::sort(nums.begin(), nums.begin() + n);
        for(int i = 0; i < n - 1; i++) {
            int diff = nums[i + 1] - nums[i];
            maxdiff = max(maxdiff, diff);
        }

        return maxdiff;
    }
};