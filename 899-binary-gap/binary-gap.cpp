class Solution {
public:
int distance(string s){
    int i=0;
    int j=1;
    int ans=0;
    int fans=0;
    while(j<s.size()){
        if(s[j]=='1')
            {
           ans=j-i;
           i=j;
           j++;
            }
            
            
        
        else{
            j++;
        }
        
        fans=max(ans,fans);
    }
    return fans;

}
int binary(int n){
    string s="";
    while(n>1){
        s+=to_string(n%2);
        n=n/2;
    }
    s+='1';
    reverse(s.begin(),s.end());
   return distance(s);
}
    int binaryGap(int n) {
        return binary(n);
    }
};
// 1101