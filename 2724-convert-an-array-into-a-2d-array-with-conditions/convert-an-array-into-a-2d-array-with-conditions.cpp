class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
       
        
     
        int maxi=0;
        for(auto i:m){
            maxi=max(maxi,i.second);
        }
        vector<vector<int>>ans;
    
        for(int i=0;i<maxi;i++){   
           vector<int>fans;
            for(auto j=m.begin();j!=m.end();j++){
                 if(j->second>=1){
                      fans.push_back(j->first);
                      j->second=j->second-1;
                 }
            }
            for(auto k:fans){
                cout<<k<<" ";
            }
            ans.push_back(fans);
            cout<<endl;
        }
        return ans;
    }
};