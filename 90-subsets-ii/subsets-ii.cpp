class Solution {
public:
    void helper(vector<int>&nums,vector<int> &ans, vector<vector<int>>&result,int idx,bool flag)
    {
        
       if(idx == nums.size())
       { 
          result.push_back(ans);
          return ;
       }
           int ch=nums[idx];
    
 
        if (idx > 0 && nums[idx] == nums[idx - 1] && !flag)
        {
            helper(nums, ans, result, idx + 1, false);
            return;
        }

        ans.push_back(nums[idx]);
        helper(nums, ans, result, idx + 1, true);
        ans.pop_back();
        helper(nums, ans, result, idx + 1, false);
    }

    vector<vector<int>>subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
      vector<vector<int>>result; 
      vector<int> ans ;
      helper(nums,ans,result,0,true);
        return result;
    }
};