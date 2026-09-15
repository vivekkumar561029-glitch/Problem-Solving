class Solution {
public:

// int rober(vector<int>&arr,int i){
//     if(i==arr.size()-1) return arr[i];
//     if(i==arr.size()-2) return max(arr[i],arr[i+1]);
//     return max(arr[i]+rober(arr,i+2),0+rober(arr,i+1));

// }
// int rober(vector<int>&arr,int i,vector<int>&dp){
//     if(i==arr.size()-1) return arr[i];
//     if(i==arr.size()-2) return max(arr[i],arr[i+1]);

//     if(dp[i]!= -1) return dp[i];
//     return dp[i]= max(arr[i]+rober(arr,i+2,dp),0+rober(arr,i+1,dp));
//}
  int bup(vector<int>&arr,int i,vector<int>&dp){
    int n=arr.size();
    if(n==1) return arr[0];
    dp[n-1]=arr[n-1];
    dp[n-2]=max(arr[n-1],arr[n-2]);
    for(int i=n-3;i>=0;i--){
 dp[i]=max(arr[i]+dp[i+2],0+dp[i+1]);
    }
   return dp[0];
  }
    int rob(vector<int>& nums) {
        vector<int>dp(100,-1);
         return bup(nums,0,dp);
        
    }
};