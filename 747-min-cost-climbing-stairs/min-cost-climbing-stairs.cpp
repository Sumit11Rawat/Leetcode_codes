class Solution {
public:
//  recursive soln
// int chk(vector<int>&cost,int n){
//     if(n==1||n==0){
//         return cost[n];
//     }
//     return min(chk(cost,n-1),chk(cost,n-2))+cost[n];
// }
int chk1(vector<int>&cost,int n,vector<int>&dp){
    if(n<=1){
        return cost[n];
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=min(chk1(cost,n-1,dp),chk1(cost,n-2,dp))+cost[n];
    return dp[n];
}
    int minCostClimbingStairs(vector<int>& cost) {
       int n=cost.size();
       vector<int>dp(n+1,-1);
        return min(chk1(cost,n-1,dp),chk1(cost,n-2,dp));
     
    }
};