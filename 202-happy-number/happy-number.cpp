class Solution {
public:
    bool chk(int n,unordered_map<int,int>m){
        if(n==1){
            return true;
        }
        // note -->this condition is also self sufficient to evaluate false condition
        // by observation
    //    if(n==4){
    //        return false;
    //    }
    if(m[n]>0){
        return false;
    }
    else{
        m[n]++;
    }
         
            int ans=0;
            while(n){
                ans+=(n%10)*(n%10);
                n=n/10;
            }
        
            return chk(ans,m);
        
        
  
    }
    bool isHappy(int n){
        
        unordered_map<int,int>m;
        
         if(chk(n,m)){
             return true;
         }
         return false;
    }
};