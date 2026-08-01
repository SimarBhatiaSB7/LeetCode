class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
        std::vector<int> digits_count;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int count = 0;

            while (num != 0) {
                num = num / 10;
                count++;
            }
            digits_count.push_back(count);
        }

        int even_count = std::count_if(digits_count.begin(), digits_count.end(), [](int x) {
            return x % 2 == 0;
        });

        return even_count;
    }
};