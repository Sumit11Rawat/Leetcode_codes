class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<int,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
         
        }
        for(int i=0;i<s.size();i++){
          
            m[t[i]]--;
        }
        
       for(int i=0;i<s.size();i++){
           if(m[s[i]]!=0){
               return false;
           }
       }
        return true;
    }
};