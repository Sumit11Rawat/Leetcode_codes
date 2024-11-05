class Solution {
public:
   void bfs(vector<vector<char>>&grid,vector<vector<int>>&visited,int r,int c){
        visited[r][c]=1;
        if(r-1>=0 and grid[r-1][c]=='1' and visited[r-1][c]==0){
            bfs(grid,visited,r-1,c);
        }
        if(c-1>=0 and grid[r][c-1]=='1' and visited[r][c-1]==0){
            bfs(grid,visited,r,c-1);
        }
        if(r+1<grid.size() and grid[r+1][c]=='1' and visited[r+1][c]==0){
            bfs(grid,visited,r+1,c);
        }
        if(c+1<grid[0].size() and grid[r][c+1]=='1' and visited[r][c+1]==0){
            bfs(grid,visited,r,c+1);
        }
   }
    int numIslands(vector<vector<char>>& grid) {
        // count the no. of connected components in. a graph

        // create adjacency matrix;
          vector<vector<int>>adj(grid.size());
          vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),0));

          int count=0;
          for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(visited[i][j]==0 and grid[i][j]=='1'){
                   
                    bfs(grid,visited,i,j);
                    
                    count++;
                }
            }

          }
          return count;
        
    }
};