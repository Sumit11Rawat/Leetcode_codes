class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                ans+='*';
            }
            else{
                ans+=s[i];
            }
        }
        vector<string>fans;
        string b="";
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='*'&&b.size()!=0){
                fans.push_back(b);
                b="";
            }
            if(ans[i]=='*'){
                continue;
            }
            if(i==ans.size()-1){
                b+=ans[i];
                fans.push_back(b);
            }
            else{
                b+=ans[i];
            }
        }
        reverse(fans.begin(),fans.end());
        ans="";
        for(auto it:fans){
            ans+=it+" ";
            
            
        }
         ans.pop_back();
        return ans;
    }
};