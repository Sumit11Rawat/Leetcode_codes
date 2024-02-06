class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for(auto i:strs){
            string c=i;
            sort(i.begin(),i.end());
            m[i].push_back(c);
        }
        vector<vector<string>>fans;
        for(auto i:m){
            fans.push_back(i.second);

        }
        return fans;
    }
};