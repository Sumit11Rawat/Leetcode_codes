class Solution {
public:
    bool chk(int n,unordered_map<int,int>m){
        if(n==1){
            return true;
        }
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
            // m[ans]++;
            return chk(ans,m);
        
        
    //    return false;
    }
    bool isHappy(int n){
        // int a=n;
        unordered_map<int,int>m;
        // m[n]++;
         if(chk(n,m)){
             return true;
         }
         return false;
    }
};