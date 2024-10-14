class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        map<string,int>mp;
        for(int i=0;i<strs.size();i++){
            string temp="";
            for(int j=0;j<strs[i].size();j++){
                temp+=strs[i][j];
                mp[temp]++;
            }
        }
        int maxi=0;
        string ans="";
        cout<<mp["fl"]<<endl;
        for(auto& i:mp){
            
            if(i.second>=maxi and i.second>=n){
                maxi=i.second;
                if(i.first.size()>ans.size()){
                    ans=i.first;
                }
            }
        }
        return ans;


        
    }
};