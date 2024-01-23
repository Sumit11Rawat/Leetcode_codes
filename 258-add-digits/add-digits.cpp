class Solution {
public:
    int addDigits(int num) {
        if(num<=9){
            return num;
        }
        else{
            int ans=0;
            while(num){
                ans+=(num%10);
                num/=10;
            }
            return addDigits(ans);
        }
      
    }
};