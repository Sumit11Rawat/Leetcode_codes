class Solution {
public:
    bool judgeSquareSum(int c) {
        // if(c==0){
        //     return true;
        // }
        // unordered_map<long,long>m;
        // for(long long i=0;i<=c;i++){
        //     m[i*i]=i;

        // }
        // for(int i=0;i<c;i++){
        //     long chk=c-i*i;
        //   if(m[chk]){
        //       return true;
        //   }
        // }
        // return false;
        long long int i=0;
        long long int j=sqrt(c);
        while(i<=j){
            if(i*i+j*j>c){
                j--;
            }
            if(i*i+j*j<c){
                i++;
            }
            if(i*i+j*j==c){
                return true;
            }
        }
        return false;
    }
};