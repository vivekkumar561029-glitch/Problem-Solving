class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int start = 1;
        int end = *max_element(nums.begin(),nums.end());
        int j ;
        while(start <= end)
        {
            long long x = 0;
            int mid  = start + (end - start)/2;
            for(int i = 0; i<nums.size();i++)
            {
                x = x + (nums[i]+mid-1)/mid;
            }
            if(x <= threshold)
            {
                j = mid;
                end = mid -1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return j;
    }
};