class Solution {
public:
void dfs(vector<vector<int>>&invocations,vector<int>&visited,vector<vector<int>>&adj,int node){
    visited[node]=-1;
    for(auto i:adj[node]){
        if(visited[i]==false){
        dfs(invocations,visited,adj,i);
        }

    }

}
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        // create adjacency matrix;
        int b=invocations.size();

        vector<vector<int>>adj(n+1);
        vector<int>visited(n,0);
        map<int,int>m;

        for(int i=0;i<b;i++){
            adj[invocations[i][0]].push_back(invocations[i][1]);
            m[invocations[i][1]]++;
        }
        for(int i=0;i<n;i++){
            if(!m[i]){
                visited[i]=1;
            }
        }
        vector<int>ans1;
        for(int i=0;i<n;i++){
            ans1.push_back(i);
        }

        dfs(invocations,visited,adj,k);
        for(int i=0;i<n;i++){
            if(visited[i]>=0){
                for(auto j:adj[i]){
                    if(visited[j]==-1){
                        return ans1;
                    }
                }

            }
        }
        ans1.clear();
        for(int i=0;i<n;i++){
            if(visited[i]>=0){
                ans1.push_back(i);
            }
        }
        return ans1;
   
    
        
    
    }
};