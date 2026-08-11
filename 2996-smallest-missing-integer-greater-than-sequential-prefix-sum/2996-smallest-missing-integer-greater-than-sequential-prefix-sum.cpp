class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefix_sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                prefix_sum += nums[i];
            } else {
                break;
            }
        }
        unordered_set<int> num_set(nums.begin(), nums.end());
        int x = prefix_sum;
        while (num_set.count(x)) {
            x++;
        }
        return x;
    }
};