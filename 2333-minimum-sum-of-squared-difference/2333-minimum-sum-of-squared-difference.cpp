class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long k = (long long)k1 + k2;
        vector<int> diff;

        long long sum = 0;
        for (int i = 0; i < nums1.size(); i++) {
            int d = abs(nums1[i] - nums2[i]);
            diff.push_back(d);
            sum += d;
        }

        if (k >= sum) return 0;

        sort(diff.rbegin(), diff.rend());

        int n = diff.size();
        diff.push_back(0);

        for (int i = 0; i < n; i++) {
            long long count = i + 1;
            long long reduction = (long long)(diff[i] - diff[i + 1]) * count;

            if (k >= reduction) {
                k -= reduction;
            } else {
                long long decrease = k / count;
                long long remainder = k % count;

                long long ans = 0;
                long long val = diff[i] - decrease;

                ans += remainder * (val - 1) * (val - 1);
                ans += (count - remainder) * val * val;

                for (int j = i + 1; j < n; j++) {
                    ans += 1LL * diff[j] * diff[j];
                }
                
                return ans;
            }
        }

        return 0;
    }
};