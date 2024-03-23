class Solution {
public:
    int differenceOfSums(int n, int m) {
        int ans=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                ans+=i;
            }
            sum+=i;
        }
        int num1=sum-ans;

        return num1-ans;

    }
};