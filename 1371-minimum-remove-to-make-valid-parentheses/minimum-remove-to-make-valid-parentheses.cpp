class Solution {
public:
    string minRemoveToMakeValid(string s) {
        priority_queue<pair<char,int>  >ss;

       map<int,int>m;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ss.push({'(',i});
            }
            else if(s[i]==')'){
                if(ss.size()==0){
                    m[i]++;
                }
                else{
                  ss.pop();
                }
               
            }
        }
        
        while(ss.size()>0){

            m[ss.top().second]++;
            ss.pop();
        }
        string fans="";
        for(int i=0;i<s.size();i++){
            if(!m[i]){
              fans+=s[i];
            }
        }
        string finalans="";
        for(int i=0;i<fans.size();i++){
            if(fans[i]==')'||fans[i]=='('||fans[i]>='a'&&fans[i]<='z'){
                finalans+=fans[i];
            }
        }
        return finalans;
    }
};