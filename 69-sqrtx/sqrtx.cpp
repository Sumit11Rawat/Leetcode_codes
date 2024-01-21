class Solution {
public:
    int mySqrt(int x) {
        
        if(x==0){
            return x;
        }
       
       int i=1;
       int j=x/2;
       int ans=1;
       while(i<=j){
           long mid=i+(j-i)/2;
           if(mid*mid>x){
               j=mid-1;
               
       }
       else{
           ans=mid;
           i=mid+1;
           
       }
       
    
       }
       
        return ans;
    }
}; 
// 123456