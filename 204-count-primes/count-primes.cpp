class Solution {
public:
    int countPrimes(int n) {

        if (n <= 2)
            return 0;

        vector<char> s(n, true);

        int count = 1;   // 2 is prime

        // Even numbers are not prime
        for (int i = 4; i < n; i += 2) {
            s[i] = false;
        }

        // Only check odd numbers
        for (int i = 3; 1LL * i * i < n; i += 2) {

            if (s[i]) {

                // Start from i*i
                for (int j = i * i; j < n; j += 2 * i) {
                    s[j] = false;
                }
            }
        }

        // Count remaining odd primes
        for (int i = 3; i < n; i += 2) {
            if (s[i]) {
                count++;
            }
        }

        return count;
    }
};