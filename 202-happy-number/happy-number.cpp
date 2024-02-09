class Solution {
public:
    bool chk(int n,unordered_map<int,bool>m){
        if(n==1){
            return true;
        }
       if(n==4){
           return false;
       }
        else{
            int ans=0;
            while(n){
                ans+=(n%10)*(n%10);
                n=n/10;
            }
            m[ans]=true;
            return chk(ans,m);
        }
        
    //    return false;
    }
    bool isHappy(int n){
        // int a=n;
        unordered_map<int,bool>m;
        m[n]=true;
         if(chk(n,m)){
             return true;
         }
         return false;
    }
};