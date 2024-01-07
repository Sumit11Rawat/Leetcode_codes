class Solution {
public:
    string replaceDigits(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
                   if(i%2!=0){
                    s[i]=s[i-1]+s[i]-48;
                   }
                   
        }
        return s;
    }
};