class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),0));
        for(int i=0;i<matrix[0].size();i++){
            dp[0][i]=matrix[0][i];
        }

        for(int i=0;i<matrix.size();i++){
            dp[i][0]=matrix[i][0];
        }

         for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]==1){
                dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
            }
            }
        }
        int sum=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                    cout<<dp[i][j]<<" ";
                if(matrix[i][j]==1){
                sum+=dp[i][j];
            
            }
            }
            cout<<endl;
        }
        return sum; 

    }
};