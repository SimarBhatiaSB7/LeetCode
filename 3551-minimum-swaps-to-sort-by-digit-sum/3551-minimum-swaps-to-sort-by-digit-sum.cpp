class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            int x = nums[i], s = 0;
            while (x) s += x % 10, x /= 10;
            v[i] = {s, nums[i]};
        }
        sort(v.begin(), v.end());
        unordered_map<int, int> pos;
        for (int i = 0; i < n; i++)
            pos[v[i].second] = i;
        vector<bool> vis(n, false);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (vis[i] || pos[nums[i]] == i) continue;
            int j = i, cycle = 0;
            while (!vis[j]) {
                vis[j] = true;
                j = pos[nums[j]];
                cycle++;
            }
            ans += cycle - 1;
        }
        return ans;
    }
};