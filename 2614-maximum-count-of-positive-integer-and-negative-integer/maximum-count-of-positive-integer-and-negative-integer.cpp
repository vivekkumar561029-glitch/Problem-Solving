class Solution {
public:
    int maximumCount(vector<int>& nums) {
       int n=nums.size();
       int count_pos=0;
       int count_neg=0;
       for(int i=0;i<n;i++)
       {
        if(nums[i]<0)
        {
            count_neg++;
        }
        else if(nums[i]>0)
        {
            count_pos++;
        }
        else
        {
            continue;
        }
       } 
       if(count_pos>count_neg)
       {
        return count_pos;
       }
       else
       {
        return count_neg;
       }
       return 0;
    }
};