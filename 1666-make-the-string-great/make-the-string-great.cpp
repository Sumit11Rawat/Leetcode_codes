class Solution {
public:
    string makeGood(string s) {
        string ans=s;
        int n=s.size();
        for(int j=0;j<n;j++){
            s=ans;
            ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]+32||s[i]==s[i+1]-32){
                i++;
            }
            else{
                ans+=s[i];
            }
        }
        }
        return ans;
    }
};