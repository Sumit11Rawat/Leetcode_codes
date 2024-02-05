class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>s1;
        set<int>s2;
        int ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                 ans=matrix[i].size();
              if(matrix[i][j]==0){
                  s1.insert(i);
              }
            }
        }
        for(int j=0;j<ans;j++){
            for(int i=0;i<matrix.size();i++){
                if(matrix[i][j]==0){
                    s2.insert(j);
                    
                }
            }
        }
        for(int i:s1){
            for(int j=0;j<ans;j++){
                  matrix[i][j]=0;
            }
        }
        for(int i:s2){
            for(int j=0;j<matrix.size();j++){
                matrix[j][i]=0;
            }
        }
    }
};