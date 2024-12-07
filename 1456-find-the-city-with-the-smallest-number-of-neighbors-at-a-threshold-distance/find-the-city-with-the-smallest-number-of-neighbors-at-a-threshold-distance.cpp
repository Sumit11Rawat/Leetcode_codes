class Solution {
public:
   int dijkstra(vector<vector<pair<int,int>>>&adj,int &node,int &thresh){

     priority_queue<pair<int, int>, vector<pair<int, int>>,  greater<pair<int, int>>> pq;
     vector<int>fdist(adj.size(),1e9);

     if(adj[node].size()){
        pq.push({0,node});
        fdist[node]=0;
     }
     else{
        return -1;
     }
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            
            int node=it.second;
            cout<<"node :"<<node<<endl;
            int coming_wt=it.first;
            for(auto i:adj[node]){
                int new_node=i.first;
                int new_wt=i.second;
                if(new_wt+coming_wt<fdist[new_node]){
                    cout<<new_node<<" "<<coming_wt<<" "<<new_wt<<endl;
                    fdist[new_node]=new_wt+coming_wt;
                    pq.push({fdist[new_node],new_node});
                }
            }
            
        }

        for(int i=0;i<adj.size();i++){
            cout<<fdist[i]<<" ";
        }
        cout<<endl;

     
     int count=0;
     for(int i=0;i<adj.size();i++){
        if(fdist[i]<=thresh){
            count++;
        }
     }
     
     return count;


   }
    int findTheCity(int n, vector<vector<int>>& edges, int thresh) {
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0],edges[i][2]});
        }
        for(int i=0;i<n;i++){
           cout<<i<<endl;
           for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j].first<<" "<<adj[i][j].second<<endl;;
           }

        }
        vector<int>dist(n,1e9);
        for(int i=0;i<n;i++){
            cout<<"i :"<<i<<endl;
            dist[i]=dijkstra(adj,i,thresh)-1;
            cout<<dist[i]<<endl;
        }
          for(int i=0;i<adj.size();i++){
            cout<<dist[i]<<" ";
        }
        cout<<endl;

        
        int mini=1e9;
        for(int i=0;i<n;i++){
            mini=min(mini,dist[i]);
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            if(dist[i]==mini){
                maxi=i;
            }
        }
        return maxi;
    }
};