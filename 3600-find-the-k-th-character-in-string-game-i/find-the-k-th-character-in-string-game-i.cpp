class Solution {
public:
string nextstring(string s){
    string alpha="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<s.size();i++){
        int ind=s[i]-'a';
        ind=(ind+1)%26;
        s[i]=alpha[ind];
    }
    return s;

}
    char kthCharacter(int k) {
     
        string start="a";
        for(int i=0;i<10;i++){
            start+=nextstring(start);

        }
    return start[k-1];
        
    }
};