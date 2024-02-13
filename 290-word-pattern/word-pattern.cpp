class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string>fans;
        int i=0;
        string b="";
        while(i<s.size()){
            if(s[i]!=' '){
       b+=s[i];
         i++;
            }
            else{
                fans.push_back(b);

                b="";
                i++;
            }
            if(i==s.size()){
                 fans.push_back(b);
            }
          
        }
        if(fans.size()!=pattern.size()){
            return false;
        }
        bool ans;
        unordered_map<char,string>m;
        unordered_map<char,int>m1;
        unordered_map<string,int>m2;
        for(int i=0;i<pattern.size();i++){
            if(!m1[pattern[i]]){
                m1[pattern[i]]++;
                 string ans="";
                 for(int j=0;j<fans[i].size();j++){
                     ans+=fans[i][j];
                 }
                 
                 if(!m2[ans]){
                  m2[ans]++;
                  m[pattern[i]]=ans;
                 }
                 else{
                     return false;
                 }
                 
            }
          else{
              if(m[pattern[i]]!=fans[i]){
                  return false;
              }
            //   else{
            //       return false;
            //   }
          }
        }
        return true;
    }
};