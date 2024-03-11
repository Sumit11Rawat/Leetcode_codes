class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
           m[s[i]]++;
        }
        s="";
        for(int i=0;i<order.size();i++){
           if(m[order[i]]>=1){
               while(m[order[i]]>=1){
               s+=order[i];
               m[order[i]]--;
           }
           }
           else{
               break;
           }
        }
        for(auto i:m){
            if(i.second>=1){
                while(i.second>=1){
                 s+=i.first;
                 i.second--;
                }
                
            }
        }
        return s;
    }
};