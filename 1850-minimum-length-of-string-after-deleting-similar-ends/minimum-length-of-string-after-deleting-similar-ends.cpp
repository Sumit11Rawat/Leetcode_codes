class Solution {
public:
    int minimumLength(string s) {
       int i=0;
       int j=s.size()-1;
       while(i<j){
           if(s[i]==s[j]){
               
               i++;
               j--;
               if(i>=j){
                   break;
               }
            while(s[i-1]==s[i]){
                i++;
            }
            if(i==s.size()){
              
                return 0;
            }
            while(s[j+1]==s[j]){
                j--;
            }
            if(j<=i){
              break;
            }
            
           }
           else{
               break;
           }
       } 
       if(i==j){
           return 1;
       }
       if(i>j){
           return 0;
       }
       return j-i+1;
    }
};