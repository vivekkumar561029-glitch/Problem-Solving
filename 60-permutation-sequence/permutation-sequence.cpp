class Solution {
public:

    void subset(vector<string>&v,string ans, string str, int i) {

    if (str == "") {
        v.push_back(ans);
        return;
    }

    for (int k = 0; k < str.size(); k++) {

        char ch = str[k];
        string temp = "";

        for (int j = 0; j < str.size(); j++) {
            if (j != k) {
                temp.push_back(str[j]);
            }
        }

        ans.push_back(ch);

        subset(v,ans, temp, 0);

         ans.pop_back();
    }
}
    string getPermutation(int n, int k) {
        string str="";
        for(int i=1;i<=n;i++){
            str += to_string(i);
        }
        vector<string>v;
        subset(v,"", str, 0);
        return v[k-1];
    }
};