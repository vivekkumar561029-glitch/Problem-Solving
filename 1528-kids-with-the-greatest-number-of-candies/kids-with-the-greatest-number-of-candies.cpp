class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;

        int maximum = 0;

        // Find maximum candies
        for(int i = 0; i < candies.size(); i++) {
            maximum = max(maximum, candies[i]);
        }

        // Check every kid
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] + extraCandies >= maximum) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};