class Solution {
public:
    bool doesAliceWin(string s) {
        int vowel=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowel++;
            }
        }
        if(vowel>0){
            return true;
        }
        else{
           return false;
        }

        
    }
};