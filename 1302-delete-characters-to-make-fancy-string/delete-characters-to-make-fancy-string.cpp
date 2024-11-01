class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        map<char,int>m;
        for(int i=0;i<s.size()-1;i++){
            if(!m[s[i]]){
                if(i>=1){
                    m[s[i-1]]=0;
                }
                ans+=s[i];
                m[s[i]]++;
                if(s[i]!=s[i+1]){
                    m[s[i]]=0;
                }
            }
            else{
                if(m[s[i]]==1){
                    ans+=s[i];
                    m[s[i]]++;
                    if(s[i]!=s[i+1]){
                    m[s[i]]=0;
                }

                }
                else{

                }
            }
        }
        if(m[s[s.size()-1]]<=1){
            ans+=s[s.size()-1];
        }
        return ans;
    }
};