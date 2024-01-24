class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                ans+=s[i]+32;

            }
            if(s[i]>=97&&s[i]<=122)
{
    ans+=s[i];
}   
if(s[i]>='0'&&s[i]<='9'){
    ans+=s[i];
}         
if(s[i]==' '||s[i]==','||s[i]=='.'||s[i]==':'){
                continue;
            }
            
        }
        int i=0;
        int j=ans.size()-1;
        while(i<=j){
            if(ans[i]!=ans[j]){
              return false;
            }
            i++;
            j--;
        }

        return true;
    }
};