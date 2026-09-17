class Solution {
public:
    bool isPowerOfFour(int n) {


        if (n <= 0) return false;

        for (int i = 0; i <= 30; i++) {
            long long x = pow(4, i);

            if (x == n) return true;
        }

        return false;

    }
};