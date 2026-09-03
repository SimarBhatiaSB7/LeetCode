class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int smallestOdd = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] % 2 == 1)
                smallestOdd = min(smallestOdd, nums[i]);
        }

        if(smallestOdd == INT_MAX) return true;
        for(int i = 0; i<nums.size(); i++){
            if (nums[i] % 2 == 0 && nums[i] <= smallestOdd)
                return false;
        }
        return true;
    }
};