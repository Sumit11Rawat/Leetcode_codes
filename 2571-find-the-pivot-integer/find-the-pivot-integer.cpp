class Solution {
public:
    int pivotInteger(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            ans+=i;

        }
        int chk=0;
        for(int i=1;i<=n;i++){
            chk+=i;
            ans=ans-i+1;
            if(chk==ans){
                return i;
            }
        }
        return -1;
    }
};