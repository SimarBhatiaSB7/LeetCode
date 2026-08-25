class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int ans;
        for(int i = k; i>n*k + k; i=i+k){
            bool found = find(nums.begin(), nums.end(), i) != nums.end();
            
            if(found){
                continue;
            } 
            else{
                ans = i;
                break;
            }
        }
        return ans;
    }
};