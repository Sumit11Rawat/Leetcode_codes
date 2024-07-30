class Solution {
public:
    string getEncryptedString(string s, int k) {
        string t=s;
        for(int i=0;i<s.size();i++){
            
                s[i]=t[(i+k)%s.size()];

            
        }
        return s;
    }
};