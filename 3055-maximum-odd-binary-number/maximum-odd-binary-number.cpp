class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans="";
        int one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                one++;
            }
        }
        for(int i=0;i<one-1;i++){
            ans+='1';
        }
        for(int i=0;i<s.size()-one;i++){
            ans+='0';
        }
        ans+='1';
        return ans;

    }
};