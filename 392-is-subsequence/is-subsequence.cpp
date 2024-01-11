class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0){
            return true;
        }
        if(s.size()==1&&t.size()==1){
            if(s[0]==t[0]){
                return true;
            }
            else{
                return false;
            }
        }
        int i=0;
        int j=0;
        while(i<s.size()&&j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i>s.size()-1){
            return true;
        }
        return false;
    }
};