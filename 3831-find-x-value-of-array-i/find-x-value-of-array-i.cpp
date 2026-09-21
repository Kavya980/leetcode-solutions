class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        
        vector<long long> ans(k, 0);
        vector<long long> dp(k, 0);

        for (int num : nums) {
            vector<long long> newDp(k, 0);

            int r = num % k;

            // Subarray containing only current element
            newDp[r]++;

            // Extend all previous subarrays
            for (int j = 0; j < k; j++) {
                if (dp[j] > 0) {
                    int newR = (j * r) % k;
                    newDp[newR] += dp[j];
                }
            }

            // Add current subarrays to answer
            for (int j = 0; j < k; j++) {
                ans[j] += newDp[j];
            }

            dp = newDp;
        }

        return ans;
    }
};