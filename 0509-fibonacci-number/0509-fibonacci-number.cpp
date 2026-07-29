class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1){
            return n;
        }

        std::vector<int> nums = {0,1};
        for(int i = 2; i<=n; i++){
            int f = nums[i - 1] + nums[i - 2];
            nums.push_back(f);
        }
        return nums.back();
    }
};