class Solution {
public:
    int findGCD(vector<int>& nums) {
     sort(nums.begin(), nums.end());
        int n=nums.size();
        int x=0;
    for(int i=1;i<=nums[0];i++){
        if(nums[0]%i==0 && nums[n-1]%i==0){
            x=i;
        }
    }
     return x;
    }
};