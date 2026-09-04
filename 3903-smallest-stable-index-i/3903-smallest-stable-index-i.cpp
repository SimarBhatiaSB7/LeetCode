class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffix(n, 0);
        int min_nums = INT_MAX; 
        for (int i = n - 1; i >= 0; i--){
            min_nums = min(min_nums, nums[i]);
            suffix[i] = min_nums;
        }
 
        int max_nums = 0;
        for (int i = 0; i < n; i++){
            max_nums = max(max_nums, nums[i]);
            int score = max_nums - suffix[i];
            if (score <= k) return i;
        }
 
        return -1;
    }
};