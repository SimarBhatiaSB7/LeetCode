class Solution {
public:
    int tribonacci(int n) {
        vector<int> nums = {0,1,1};
        int tn;
        if(n == 0 || n == 1 || n == 2){
            return nums[n];
        }
        else{
            for(int i = 3; i<= n; i++){
                tn = nums[i-1] + nums[i-2] + nums[i-3];
                nums.push_back(tn);
            }
            return nums[n];
        }
    }
};