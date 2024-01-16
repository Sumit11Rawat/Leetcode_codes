class Solution {
public:
    int maxVowels(string s, int k) {
        int fans=0;
        for(int j=0;j<k;j++){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                   fans++;
            }
        }
        int ans=fans;
        for(int j=k;j<s.size();j++){
             if((s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')){
                 ans++;
             }
              if(s[j-k]=='a'||s[j-k]=='e'||s[j-k]=='i'||s[j-k]=='o'||s[j-k]=='u'){
                 ans--;
             }
             fans=max(fans,ans);
        }
        return fans;
    }
};