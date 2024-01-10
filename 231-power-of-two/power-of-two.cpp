class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
           if(chk(n)){
               return true;
           }
           else{
               return false;
           }
    }
    bool chk(int n){
        if(n==1){
            return true;
        }
        if(n%2!=0){
            return false;
        }
        return chk(n/2);
    }
};