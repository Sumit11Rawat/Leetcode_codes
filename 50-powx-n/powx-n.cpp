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