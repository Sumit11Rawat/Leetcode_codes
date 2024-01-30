class Solution {
public:
bool alternate(string fans){
    for(int i=0;i<=fans.size()-1;i++){
        if(fans[i]==fans[i+1]){
            return false;
        }
    }
    return true;
}
bool binary(int n){
    
    string fans="";
    while(n>1){
      
        fans+=to_string(n%2);
        n/=2;
    }
    fans+='1';
    reverse(fans.begin(),fans.end());
    if(alternate(fans)){
        return true;
    }
    return false;
}
    bool hasAlternatingBits(int n) {
        if(binary(n)){
            return true;
        }
        return false;
    }
};