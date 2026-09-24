class Solution {
public:

    int helper(vector<int>& nums, int i, int target,
               vector<vector<int>>& dp, int offset) {

        if (i == nums.size()) {
            return target == 0;
        }
        if (target < -offset || target > offset) {
            return 0;
        }

        if (dp[i][target + offset] != -1) {
            return dp[i][target + offset];
        }

        int plus = helper(nums, i + 1,
                          target - nums[i], dp, offset);

        int minus = helper(nums, i + 1,
                           target + nums[i], dp, offset);

        return dp[i][target + offset] = plus + minus;
    }

    int findTargetSumWays(vector<int>& nums, int target) {

        int sum = 0;

        for (int x : nums) {
            sum += x;
        }
        if (target > sum || target < -sum) {
            return 0;
        }

        int n = nums.size();

        int offset = sum;

        vector<vector<int>> dp(
            n,
            vector<int>(2 * sum + 1, -1)
        );

        return helper(nums, 0, target, dp, offset);
    }
};