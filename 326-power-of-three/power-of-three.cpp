class Solution {
public:
    bool isPowerOfThree(int n) {
  
        if (n <= 0) return false;

        for (int i = 0; i <= 30; i++) {
            long long x = pow(3, i);

            if (x == n) return true;
        }

        return false;
    }
};
