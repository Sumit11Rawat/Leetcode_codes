class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(int i=0;i<times.size();i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        for(int i=0;i<=n;i++){
            cout<<i<<endl;
            for(int j=0;j<adj[i].size();j++){
                cout<<adj[i][j].first<<" "<<adj[i][j].second<<endl;
            }
            
        }
        cout<<endl;
        priority_queue<pair<int, int>, vector<pair<int, int>>,  greater<pair<int, int>>> pq;
        vector<int>dist(n+1,1e9);
        if(adj[k].size()){
        dist[k]=0;
        pq.push({0,k});
        }
        cout<<0<<" "<<k<<endl;
        while(!pq.empty()){
          auto it=pq.top();
          pq.pop();
          int node=it.second;
          cout<<node<<endl;
          int coming_wt=it.first;
          for(auto i:adj[node]){
         
             
            int new_node=i.first;
            int new_wt=i.second;
            if(coming_wt+new_wt<dist[new_node]){
                cout<<"inside "<<coming_wt<<" "<<new_wt<<" "<<new_node<<endl;
                dist[new_node]=coming_wt+new_wt;
                pq.push({dist[new_node],new_node});
            }
        
          }
        }
        cout<<endl;
        for(int i=0;i<=n;i++){
            cout<<dist[i]<<" ";
        }
        cout<<endl;
        int maxi=-1;
        for(int i=1;i<=n;i++){
            if(dist[i]!=1e9){
            maxi=max(maxi,dist[i]);
           }
           else{
            return -1;
           }
        }
        if(maxi==-1){
            return -1;
        }
        return maxi;


        }
};