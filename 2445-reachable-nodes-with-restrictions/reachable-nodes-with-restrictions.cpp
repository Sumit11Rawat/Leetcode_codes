class Solution {
public:

  void dfs(vector<vector<int>>&adj,vector<int>&chk ,int node){
  
     chk[node]=1;

     for(auto i:adj[node]){
        if(chk[i]==0){
            dfs(adj,chk,i);
        }
     }

  }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<vector<int>>adj(n);
         vector<int>chk(n,0);
        for(int i=0;i<restricted.size();i++){
            chk[restricted[i]]=-1;
        }
        for(int i=0;i<edges.size();i++){
            if(chk[edges[i][0]]!=-1 and chk[edges[i][1]]!=-1){
                adj[edges[i][0]].push_back(edges[i][1]);
                adj[edges[i][1]].push_back(edges[i][0]);
            }
        }
        
     dfs(adj,chk,0);
          
        int count=0;
        for(int i=0;i<n;i++){
            if(chk[i]==1){
                count++;
                cout<<i<<endl;
            }
        }
        return count;
        
    }
};