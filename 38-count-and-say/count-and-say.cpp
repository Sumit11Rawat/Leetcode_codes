class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        int i=2;
        // map<char,int>m;
        string ans="11";
        string prev="";
        while(i<n){

          prev=ans;
          
          ans="";
           

           int j=0;
           int k=0;
           while(j<prev.size()){
               if(prev[j]!=prev[k]){
                   
                   
                       ans+=to_string(k-j);
                   
                   ans+=prev[j];
                   j=k;
                   
               }
               else{
                   k++;
               }
               if(k==prev.size()){
                   ans+=to_string(k-j);
                   ans+=prev[j];
                   break;
               }
           }
      
          i++;

        
        }
 

    return ans;

    }
};