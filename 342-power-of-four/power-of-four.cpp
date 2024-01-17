class Solution {
public:
    bool chk(int n){
    if(n==1){
        return true;
    }
    if(n%4!=0){
        return false;
    }
    return chk(n/4);
}
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        return chk(n);
    }
};