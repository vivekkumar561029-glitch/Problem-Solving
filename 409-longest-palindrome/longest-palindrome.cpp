class Solution {
public:
    int longestPalindrome(string s) {
        int lower[26] = {0};
        int upper[26] = {0};

        for (char ch : s) {
            if (ch >= 'a' && ch <= 'z')
                lower[ch - 'a']++;
            else if (ch >= 'A' && ch <= 'Z')
                upper[ch - 'A']++;
        }

        int ans = 0;
        bool odd = false;

        for (int i = 0; i < 26; i++) {
            if (lower[i] % 2 == 0)
                ans += lower[i];
            else {
                ans += lower[i] - 1;
                odd = true;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (upper[i] % 2 == 0)
                ans += upper[i];
            else {
                ans += upper[i] - 1;
                odd = true;
            }
        }

        if (odd)
            ans++;

        return ans;
    }
};