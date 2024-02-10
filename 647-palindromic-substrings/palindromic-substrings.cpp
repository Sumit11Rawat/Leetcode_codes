class Solution {
public:
bool ispalindrome(string s){
    int i=0;
    int j=s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    int countSubstrings(string s) {
        int count=0;
        int j=s.size();
        
        for(int i=0;i<s.size();i++){
         string ans="";
         for(int j=i;j<s.size();j++){
             ans+=s[j];
             if(ispalindrome(ans)){
                 count++;
             }
         }
    }
    return count;
    }
};