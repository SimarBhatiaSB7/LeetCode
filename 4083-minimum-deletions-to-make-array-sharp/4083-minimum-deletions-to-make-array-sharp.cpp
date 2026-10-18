class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        for(int i = 0; i<n; i++){
            if(k == 0 || nums[i] != nums[k-1]){
                nums[k++] = nums[i];
            }
        }
        return n-k;
    }
};