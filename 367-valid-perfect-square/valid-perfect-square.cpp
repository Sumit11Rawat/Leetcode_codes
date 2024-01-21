class Solution {
public:
    bool isPerfectSquare(int x) {
      
       if(x==0||x==1){
           return true;
       }
       int i=1;
       int j=x;
       while(i<=j){
           long long mid=i+(j-i)/2;
           if(mid*mid==x){
               return true;
           }
           if(mid*mid>x){
               j=mid-1;
           }
           else{
               i=mid+1;
           }
       }
return false;
    }
};