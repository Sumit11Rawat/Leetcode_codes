class Solution {

public:

    int calc(int r, int c,vector<vector<int>>&grid,vector<vector<int>>&dp){
         if(dp[r][c]!=-1){
            return dp[r][c];
         }
         cout<<"r :"<<r<<"c :"<<c<<endl;
         int maxi=0;
         int n=grid.size();
         int m=grid[0].size();

         if(r-1>=0 and c+1<m and grid[r-1][c+1]>grid[r][c]){

          maxi=max(maxi,1+calc(r-1,c+1,grid,dp));
         }
         if(c+1<m and grid[r][c+1]>grid[r][c]){
            maxi=max(maxi,1+calc(r,c+1,grid,dp));
         }
         if(r+1<n and c+1<m and grid[r+1][c+1]>grid[r][c]){
            maxi=max(maxi,1+calc(r+1,c+1,grid,dp));
         }
         dp[r][c]=maxi;
         return dp[r][c];

   }

    int maxMoves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int maxi=0;
        for(int i=0;i<n;i++){
            cout<<calc(i,0,grid,dp)<<endl;
            maxi=max(maxi,calc(i,0,grid,dp));
        }
        return maxi;
    }

};