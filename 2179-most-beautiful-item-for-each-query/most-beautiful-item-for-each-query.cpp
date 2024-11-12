class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        // typical comparison sort
        vector<pair<int,int>>vp(items.size());

        for(int i=0;i<items.size();i++){
            vp[i].first=items[i][0];
            vp[i].second=items[i][1];
        }
        // sort for optimal soln
        sort(vp.begin(),vp.end());
    
    // independently create price and beauty vector
        vector<int>price(items.size());
        vector<int>beauty(items.size());

        // insert val
        for(int i=0;i<items.size();i++){
            price[i]=vp[i].first;
            beauty[i]=vp[i].second;
        }

// refill the beauty vect at every index according to optimal ans
        int maxi=beauty[0];
        for(int i=1;i<beauty.size();i++){
             maxi=max(maxi,beauty[i]);
            beauty[i]=maxi;
        }
       
        vector<int>ans(queries.size());

// ans is upper bound-1

      for(int i=0;i<queries.size();i++){
        int ind=upper_bound(price.begin(),price.end(),queries[i])-price.begin();
        ind--;

        if(ind>items.size() ){
            ans[i]=0;
        }
        else{
            ans[i]=beauty[ind];
        }


      }
   return ans;
       
    }
};