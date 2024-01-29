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
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            int x=n;
           string ans="";
           while(x>1){
               ans+=to_string(x%i);
               x/=i;
           }
           if(x==1){
               ans+=to_string(1);
           }

            
            if(!ispalindrome(ans)){
                return false;
            }
        }
        return true;
    }
};