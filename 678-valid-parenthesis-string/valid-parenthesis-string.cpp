// class Solution {
// public:
//     bool checkValidString(string s) {
//         int n = s.size();

//         for (int i = 0; i < n / 2; i++) {
//             if (s[i] == ')') return false;
//         }

//         for (int j = n - 1; j >= n / 2; j--) {
//             if (s[j] == '(') return false;
//         }

//         int left = 0;
//         int right = 0;
//         int star = 0;

//         for (int i = 0; i < n; i++) {
//             if (s[i] == '(') left++;
//             if (s[i] == ')') right++;
//             if (s[i] == '*') star++;
//         }

//         if (left == right) return true;

//         if (left > right) {
//             if (left - right == star) return true;
//         }

//         if (right > left) {
//             if (right - left == star) return true;
//         }

//         return false;
//     }
// };





class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        int left = 0;
        int right = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') left++;
            else if (s[i] == ')') left--;
            else left++;

            if (left < 0) return false;
        }

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ')') right++;
            else if (s[i] == '(') right--;
            else right++;

            if (right < 0) return false;
        }

        return true;
    }
};
