
class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;

        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    int smallestValue(int n) {
        while (!isPrime(n)) {
            int sum = 0;
            int num = n;

            for (int i = 2; i <= num / i; i++) {
                while (num % i == 0) {
                    sum += i;
                    num /= i;
                }
            }

            if (num > 1) {
                sum += num;
            }

            if (sum == n)
                return n;

            n = sum;
        }

        return n;
    }
};