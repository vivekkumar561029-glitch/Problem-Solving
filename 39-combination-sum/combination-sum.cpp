    class Solution {
    public:
    void combsum(vector<vector<int>>&ans,vector<int>res,vector<int>&candidates,int target,int idx)
    {
        int n=candidates.size();
        if(target<0)  return;
        if(target==0) 
        {
            ans.push_back(res);
            return;
        }
        for(int i=idx;i<n;i++)
        {
            int ch=candidates[i];
            res.push_back(ch);
            combsum(ans,res,candidates,target-candidates[i],i);
            res.pop_back(); 
        }
    }
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
        {
        vector<vector<int>>ans; 
        vector<int>res;
        combsum(ans,res,candidates,target,0);
        return ans;
        }
    };