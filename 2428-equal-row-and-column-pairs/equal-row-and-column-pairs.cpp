class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            
            for(int j=0;j<grid[i].size();j++){
                int chk=0;
                for(int k=0;k<grid[i].size();k++){
                    if(grid[i][k]==grid[k][j]){
                        chk++;
                    }
                }
                if(chk==grid.size()){
                ans++;
            }
            }
            

        }
        return ans;
    }
};