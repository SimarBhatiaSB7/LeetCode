class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int min_nums = min_element(nums.begin(), nums.end()) - nums.begin();
        int max_nums = max_element(nums.begin(), nums.end()) - nums.begin();

        int left = min(min_nums, max_nums);
        int right = max(min_nums, max_nums);

        int a = right + 1;
        int b = n - left;
        int c = (left + 1) + (n - right);

        return min({a, b, c});
    }
};