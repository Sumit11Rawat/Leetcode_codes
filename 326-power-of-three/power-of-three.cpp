class Solution {
public:
bool chk(int n){
    if(n==1){
        return true;
    }
    if(n%3!=0){
        return false;
    }
    return chk(n/3);
}
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        return chk(n);
    }
};