class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {

        vector<vector<pair<int,double>>>adj(n);
       for (int i = 0; i < edges.size(); i++) {
         adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
         adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
    }

        vector<double>dist(n,0.0);
        priority_queue<pair<double,int>>pq;
        dist[start_node]=1;
        pq.push({1.0,start_node});
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            double prob=it.first;
            int node=it.second;
           for(auto &i:adj[node]){
            int new_node=i.first;
            double new_prob=i.second;
            if(new_prob*prob>dist[new_node]){
                dist[new_node]=new_prob*prob;
                pq.push({dist[new_node],new_node});
            }

           }

        }
        return dist[end_node];

    }
};