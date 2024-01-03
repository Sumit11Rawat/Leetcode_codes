class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=INT_MIN;
        int n=accounts.size();

        for(int i=0;i<n;i++){
            int ans=0;
            for(int j=0;j<accounts[i].size();j++){
                ans=ans+accounts[i][j];
            }
            maxi=max(maxi,ans);
        }
        return maxi;
    }
};