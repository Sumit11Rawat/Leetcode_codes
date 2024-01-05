class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;i<command.size();i++){
            if(command[i]=='('&&command[i+1]==')'){
                ans+='o';
                i++;
            }
            else if(command[i]=='('&&command[i+1]!=')'){
                ans=ans+"al";
                i=i+3;
            }
            else{
                ans+=command[i];
            }
        }
        return ans;
    }
};