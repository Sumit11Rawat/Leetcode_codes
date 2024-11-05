class Solution {
public:
bool is_cycle(vector<vector<int>>&adj,vector<bool>&vis,vector<bool>&path,int node){
     vis[node]=true;
     path[node]=true;
     for(auto i:adj[node]){
        if(!vis[i]){
            if(is_cycle(adj,vis,path,i)){
                return true;
            }
        }
        else if(path[i]){
            return true;
        }
     }
     path[node]=false;
     return false;
}
    bool canFinish(int n, vector<vector<int>>& p) {
        // check cycle in a directed graph
        vector<vector<int>>adj(n);
        vector<bool>vis(n,false);
        vector<bool>path(n,false);

        for(int i=0;i<p.size();i++){
            adj[p[i][1]].push_back(p[i][0]);
        }
        for(int i=0;i<n;i++){
            if(is_cycle(adj,vis,path,i)){
                return false;
            }
        }
        return true;
        

    }
};