class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>m;
       for(auto c:strs){
           string ans=c;
           sort(c.begin(),c.end());
           m[c].push_back(ans);

       }
       vector<vector<string>>fans;
       for(auto it:m){
           fans.push_back(it.second);
       }
       return fans;
    }
};