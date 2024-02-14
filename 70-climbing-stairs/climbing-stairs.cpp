 vector<int>dp(46,-1);
class Solution {
public:
// int chk(int n,int i){
//     if(i>n){
//         return 0;
//     }
//     if(i==n){
//         return 1;
//     }
//     int a=chk(n,i+1);
//     int b=chk(n,i+2);
//     return a+b;
// }
 
    int climbStairs(int n) {
        // brute force -->recursive soln
        // int i=0;
        // return chk(n,i);

        // optimised dp-->memoisation
      
        if(dp[n]!=-1){
            return dp[n];

        }
        if(n<=2){
            dp[n]=n;
            return dp[n];
        }
      dp[n]=climbStairs(n-1)+climbStairs(n-2);
      return dp[n];
    }
};