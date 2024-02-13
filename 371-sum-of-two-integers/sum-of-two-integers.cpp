class Solution {
public:
    int getSum(int a, int b) {
       int ans=a^b;
       int fans=0;
       unsigned int carry=(unsigned int)(a&b)<<1;
       while(carry){
          fans=ans^carry;
          carry=(ans&carry)<<1;
          ans=fans;
       }
       return ans;
       
    }
};
// 001
// 010
