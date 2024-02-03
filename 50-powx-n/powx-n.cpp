class Solution {
public:
    double myPow(double x, int d) {
        double ans=1;
        int n=abs(d);
        while((n)>0){
            if(n%2==0){
                x=x*x;
                n=n/2;
            }
            else{
                // in ans we are actually storing all the odd power no that is always left out due 
                // to being odd
                // for ex 2^5 here it can be written as 2^2.2
                // that extra 2 is what ans is actually storing
                // remember that at last when n==1 then power will be odd then eventually all the even  power will 
                // be multiplied to the left out giving us our final ans
                 ans*=x;
                 n--;
            }
        }
        if(d<0){
            return 1.00/ans;
        }
        return ans;
    }
};