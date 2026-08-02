class Solution {
public:
    vector<vector<int>> result;

    void subset(vector<int>& nums, int i, vector<int> ans)
    {
        if(i == nums.size())
        {
            result.push_back(ans);
            return;
        }

        int ch = nums[i];


        subset(nums, i + 1, ans);

  
        ans.push_back(ch);
        subset(nums, i + 1, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<int> ans;
        subset(nums, 0, ans);
        return result;
    }
};