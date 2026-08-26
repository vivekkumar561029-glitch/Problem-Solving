class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string str = countAndSay( n - 1);
        int freq = 1;
        string res = "";
        char ch = str[0];
        for (int i = 1; i < str.size(); i++) {
           char  dh = str[i];
            if (ch == dh) {
                freq++;
            } else {
                res += (to_string(freq) + ch);
                freq = 1;
                ch = dh;
            }
        }
        res += (to_string(freq) + ch);
        return res;
    }
};