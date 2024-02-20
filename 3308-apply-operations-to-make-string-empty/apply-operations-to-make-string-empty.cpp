class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char,int>m;
         int maxi=INT_MIN;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            maxi=max(maxi,m[s[i]]);
        }
       
        cout<<maxi<<endl;
        vector<int>ans;
        // int j=0;
        unordered_map<char,int>h;
        for(int i=s.size()-1;i>=0;i--){
            if(m[s[i]]==maxi&&!h[s[i]]){
               ans.push_back(i);
               h[s[i]]++;
            }
        }
        for(int i:ans){
            cout<<i;
        }
        reverse(ans.begin(),ans.end());
        string fans="";
        for(int i=0;i<ans.size();i++){
            fans+=s[ans[i]];
        }
        return fans;
    }
};