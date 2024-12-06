class Solution {
public:
     long long temp=0;
             long long count=0;
  int  dfs(vector<vector<int>>&adj,int node,vector<int>&vis){       
        temp++;
        vis[node]=1;
        for(auto i:adj[node]){
            if(vis[i]==0){
                dfs(adj,i,vis);
            }
        }
        return temp*(temp-1)/2;
  }
    long long countPairs(int n, vector<vector<int>>& edges) {
       if(edges.size()==0){
        return (long long)n*(n-1)/2;
       }
       
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

      
       vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
            temp=0;
            count+=dfs(adj,i,vis);
            }
        }
       return (long long)n*(n-1)/2-count;
       

    }
};