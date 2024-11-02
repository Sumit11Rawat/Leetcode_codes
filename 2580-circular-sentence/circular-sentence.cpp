class Solution {
public:
    bool isCircularSentence(string s) {
        if(s[0]!=s[s.size()-1]){
            return false;
        }
       char prev;
       for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            prev=s[i-1];
        }
        if(i>=1 and s[i-1]==' '){
            if(s[i]!=prev){
                return false;
            }

        }

       }        
       return true;
    }
};