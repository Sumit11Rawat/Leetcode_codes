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
            //    if(s[i-1]==s[i]){
            //        i++;
            //    }
            while(s[i-1]==s[i]&&i<s.size()){
                i++;
            }
            if(i==s.size()){
                // if(s.size()%2==0){
                //     return 1;
                // }
                // else{
                //     return 0;
                // }
                return 0;
            }
            while(s[j+1]==s[j]&&j!=i){
                j--;
            }
            if(j<=i){
              break;
            }
            // j--;
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