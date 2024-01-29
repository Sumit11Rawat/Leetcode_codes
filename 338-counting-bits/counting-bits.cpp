class Solution {
public:
int noof1(int i){
    int ans=0;
    if(i>=1){
        ans++;
    }
    while(i>1){
        if(i%2!=0){
            ans++;
        }
        i/=2;

    }
    return ans;
    
}
    vector<int> countBits(int n) {
        // brute force
        vector<int>fans;
        for(int i=0;i<=n;i++){
            int n1=noof1(i);
            fans.push_back(n1);
        }
        return fans;
    }
};