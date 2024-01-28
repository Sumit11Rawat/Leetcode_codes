class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MAX&&divisor==-1){
            return INT_MIN+1;
        }
        if(dividend==INT_MIN&&divisor==1){
            return INT_MIN;
        }
        if(dividend==INT_MIN&&divisor==-1||dividend==INT_MAX&&divisor==1){
            return INT_MAX;
        }
     
        long long ans=0;
        long long divi=abs(divisor);
        while(divi<=abs(dividend)){
            divi+=abs(divisor);
            ans++;
        }
        if(divisor<0&&dividend<0){
            return ans;
        }
        if(divisor<0||dividend<0){
            return -ans;
        }
        return ans;
    }
};