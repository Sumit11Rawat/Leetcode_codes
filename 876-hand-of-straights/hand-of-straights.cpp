class Solution {
public:
    bool isNStraightHand(vector<int>& ans, int a) {
      
        // if(a==ans.size()){
        //     sort(ans.begin(),ans.end());
        //     for(int i=1;i<ans.size();i++){
        //         if(ans[i-1]==ans[i]){
        //             return false;
        //         }
        //         if(ans[i-1]!=ans[i]-1){
        //             return false;
        //         }
        //     }
        //     return true;
        // }
        int sum=0;
        unordered_map<int,int>m;
        for(int i=0;i<ans.size();i++){
            m[ans[i]]++;
        }
        vector<pair<int,int>>p;
        for(auto i:m){
            p.push_back(make_pair(i.first,i.second));
        }
        sort(p.begin(),p.end());
        for(auto i:p){
            sum+=i.second;
        }
        int chk=0;
        int temp=0;
        int i=0;
        vector<int>h;
        vector<vector<int>>hh;
        bool g=false;
        for(int j=0;j<p.size();j++){
            i=0;
        while(i<p.size()){
                 
            if(p[i].second>=1){
              h.push_back(p[i].first);
              sum--;
              p[i].second=p[i].second-1;
               chk++;
               i++;
            }
            else{
                i++;
            }
            if(chk==a){
                chk=0;
              hh.push_back(h);
              h.clear();
            //   i=0;
            break;
            }
            if(i==p.size()){
                hh.push_back(h);
                g=true;
                break;
            }
        }
            // if(hh.size()==a){
            //     break;
            // }
            if(g==true){
                break;
            }
            if(sum==0){
                break;
            }
        }
        
        for(auto i:hh){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
      int chkk=0;
       for(int i=0;i<hh.size();i++){
            chkk=1;
           for(int j=1;j<hh[i].size();j++){
               if(hh[i][j-1]>=hh[i][j]){
                   return false;
               }
               if(hh[i][j-1]+1!=hh[i][j]){
                   return false;
               }
               else{
                 chkk++;
               }
              
           }
           if(chkk!=a){
            return false;
           }
           
       }
    
           return true;
    
    }
};
// 1-2
// 2-2
// 3-2

