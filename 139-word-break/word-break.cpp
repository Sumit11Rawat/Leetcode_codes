class Solution {
public:
bool solve(vector<int>&dp,string s,map<string,int>&m,int k){
    //  base case -->if coming index is n(s.size()) then there is no further string possible ahead
     if(k>=s.size()){
        return true;
     }
    //  if i get the remaining string i.e s  already present in map then directly return true;
    if(m[s.substr(k,s.size()-k)]){
        return true;
    }
    if(dp[k]!=-1){
       if(dp[k]==0){
        return false;
       }
       else{
        return true;
       }
    }

    // generate all possible combinatin of string form first that is present in dict
    for(int i=1;i<=s.size();i++){
        string temp=s.substr(k,i);
        if(m[temp] and solve(dp,s,m,i+k)){
            dp[k]=1;
            return true;
        }
    }
    dp[k]=0;
    return false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,int>m;
        for(auto i:wordDict){
            m[i]++;
        }
        int n=s.size();
        vector<int>dp(n,-1);
        
        return solve(dp,s,m,0);



        
    }
};