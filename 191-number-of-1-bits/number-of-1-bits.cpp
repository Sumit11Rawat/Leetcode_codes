class Solution {
public:
    int hammingWeight(uint32_t n) {
        // right shift
        int ans=0;
        while(n){
            if((1&n)==1){
                ans++;
            }
            n>>=1;
        }
        return ans;
    }
};