class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
             m[s[i]]++;
        }
        string ans="";
        vector<pair<int,char>>p;
        for(auto it:m){
            p.push_back(make_pair(it.second,it.first));
        }
        sort(p.begin(),p.end());
        for(auto i:p){
            while(i.first>0){
                ans+=i.second;
                i.first--;
            }
        }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};