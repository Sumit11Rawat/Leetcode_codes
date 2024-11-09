class Solution {
public:
    long long minEnd(int n, int x) {
        // standard and/or manipulation
        // to hold the set bits of x we always or it with x itself 
        
        long long ans=x;
        while(--n){
            ans=(ans+1)|x;
        }
        return ans;
        
    }
};