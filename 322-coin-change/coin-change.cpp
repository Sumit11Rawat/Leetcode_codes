class Solution {
public:

int chk(vector<int>& coins,int sum,vector<int>&dp){
    if(sum==0){
        return 0;
    }
    if(sum<0){
         return INT_MAX;
    }
    if(dp[sum]!=-1){
        return dp[sum];
    }
int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=chk(coins,sum-coins[i],dp);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
        dp[sum]=mini;
    }
    return mini;
}
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        int t=chk(coins,amount,dp);
        if(t==INT_MAX){
            return -1;
        }
        return t;
    }
};