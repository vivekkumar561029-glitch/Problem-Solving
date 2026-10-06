class Solution {
public:
int help(vector<int>& arr, int k,int i,  vector<int>&dp){
    if(i==arr.size()) return 0;
     if(dp[i]!=-1) return dp[i];
    int res=0;
    int maximum=0;
    for(int j=i;j<arr.size() && j-i+1<=k;j++){
        maximum=max(maximum,arr[j]);
        int len=j-i+1;
        int countmax=len*maximum;
        int futuresum=help(arr,k,j+1,dp);
       res = max(res,countmax+futuresum);
    }
    return dp[i]=res;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
       int n=arr.size();
        vector<int>dp(n,-1);
       int i=0;
        return help(arr,k,i,dp); 
    }
};