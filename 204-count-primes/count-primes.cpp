class Solution {
public:
    int countPrimes(int n) {
        vector<bool>ans(n+1,true);
        for(int i=2;i<=sqrt(n);i++){
            if(ans[i]){
                for(int j=2*i;j<=n;j=j+i){
                    ans[j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(ans[i]){
                count++;
            }
        }
        return count;
    }
};