class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        for(auto i:arr){
            m[i]=0;
        }
        for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
        }
        vector<pair<long long,long long>>p;
        for(auto i=m.begin();i!=m.end();i++){
            
            p.push_back(make_pair(i->second,i->first));
            
        }
        // for(auto i:p){
        //     cout<<i.first<<" "<<i.second;
        //     cout<<endl; 
        // }
      
        sort(p.begin(),p.end());
        
        long long count=p.size();
        long long ans=0;
        int i=0;
        // for(int i=0;i<p.size();i++)cout<<p[i].first<<" "<<p[i].second<<endl;
      for(int i=0;i<p.size();i++){      
              if(k>=p[i].first){
                 k=k-p[i].first;
                            //   cout<<p[i].first<<" "<<p[i].second<<" "<<k<<endl;
                  ans++;
              }
              else{
                  break;
              }
        
      }
      return count-ans;
        
    }
};
// 1-4
// 2-5
// //   1-4
//      1-2
//      2-1
//      3-3
// 1-2
// 2-1
// 3-2
// 4-1
// 5-1
// 8-1

