class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        
        vector<pair<int,int>>vp(items.size());
        for(int i=0;i<items.size();i++){
            vp[i].first=items[i][0];
            vp[i].second=items[i][1];
        }
        sort(vp.begin(),vp.end());
        vector<int>price(items.size());
        vector<int>beauty(items.size());
        for(int i=0;i<items.size();i++){
            price[i]=vp[i].first;
            beauty[i]=vp[i].second;
        }


        int maxi=beauty[0];
        for(int i=1;i<beauty.size();i++){
             maxi=max(maxi,beauty[i]);
            beauty[i]=maxi;
           
        }
        cout<<"price vector : "<<endl;
        for(int i=0;i<items.size();i++){
            cout<<price[i]<<" ";
        }
        cout<<endl;

        cout<<"beauty vector : "<<endl;
        for(int i=0;i<items.size();i++){
            cout<<beauty[i]<<" ";
        }
        cout<<endl;
        vector<int>ans(queries.size());

      for(int i=0;i<queries.size();i++){
        int ind=upper_bound(price.begin(),price.end(),queries[i])-price.begin();
        ind--;
        cout<<ind<<endl;
        if(ind>items.size() ){
            ans[i]=0;
        }
        else{
            ans[i]=beauty[ind];

        }
        cout<<i<<" "<<ans[i]<<endl;
        
        // 

      }
   return ans;
       
    }
};