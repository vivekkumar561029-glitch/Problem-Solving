class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
      
        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
        }

     
        vector<int> pr(mx + 1, 1);

        pr[0] = 0;
        pr[1] = 0;

        for (int i = 2; i <= mx; i++) {
            if (pr[i] == 0)
                continue;

            for (int j = i * 2; j <= mx; j += i) {
                pr[j] = 0;
            }
        }

     
        int count = 0;

        for (int i = 2; i <= mx; i++) {
            if (pr[i] == 1) {

               
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] % i == 0) {
                        count++;
                        break;  
                    }
                }
            }
        }

        return count;
    }
};