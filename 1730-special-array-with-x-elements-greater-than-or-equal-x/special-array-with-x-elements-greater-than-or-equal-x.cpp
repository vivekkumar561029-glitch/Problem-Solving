class Solution 
{
 public:
    int specialArray(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] >= (n-i) && (i == 0 || nums[i-1] < (n-i))) 
            {
                 ans= (n-i);
                 return ans;
            }
        }
     return -1;
    }
};