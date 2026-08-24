class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        // Only odd numbers: index i represents number 2*i + 1
        int size = n / 2;
        vector<bool> prime(size, true);

        prime[0] = false; // number 1 is not prime

        for (int i = 3; i * i < n; i += 2) {
            if (prime[i / 2]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    prime[j / 2] = false;
                }
            }
        }

        int ans = 1; // 2 is prime

        for (int i = 1; i < size; i++) {
            if (prime[i])
                ans++;
        }

        return ans;
    }
};