class Solution {
public:

// int rober(vector<int>&arr,int i){
//     if(i==arr.size()-1) return arr[i];
//     if(i==arr.size()-2) return max(arr[i],arr[i+1]);
//     return max(arr[i]+rober(arr,i+2),0+rober(arr,i+1));

// }
int rober(vector<int>&arr,int i,vector<int>&dp){
    if(i==arr.size()-1) return arr[i];
    if(i==arr.size()-2) return max(arr[i],arr[i+1]);

    if(dp[i]!= -1) return dp[i];
    return dp[i]= max(arr[i]+rober(arr,i+2,dp),0+rober(arr,i+1,dp));

}
    int rob(vector<int>& nums) {
        vector<int>dp(100,-1);
         return rober(nums,0,dp);
        
    }
};