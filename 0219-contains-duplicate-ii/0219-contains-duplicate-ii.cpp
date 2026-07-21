class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> dup_nums;

        for(int i = 0; i<nums.size();i++){
            if (dup_nums.find(nums[i]) != dup_nums.end()) {
                if(abs(i - dup_nums[nums[i]]) <= k){
                    return true;
                }
            }
            dup_nums[nums[i]] = i;
        }
        return false;
    }
};