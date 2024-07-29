class Solution {
public:
    int maxOperations(string s) {
        
        int count=0;
        int one=0;
        bool chk=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                one++;
                chk=true;
            }
            else{
                if(chk){
                count+=one;
                chk=false;
                }
            }
            
        
        
        }
        return count;
    }
};