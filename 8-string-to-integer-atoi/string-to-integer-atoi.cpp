class Solution {
public:
    int myAtoi(string s) {
        
       
        int k=0;
        while(k<s.size()){
            if(s[k]==' '){
                k++;
            }
            else{
                break;
            }
        }
        string ans="";
        bool u=false;
        for(int i=k;i<s.size();i++){
            // if(s[i]==' '&&u==true){
            //     ans+=' ';
            // }
            if(s[i]>='a'&&s[i]<='z'||s[i]=='.'||s[i]==' '){
                break;
            }
            if(s[i]-'0'>=0&&s[i]-'9'<=0){
                ans+=s[i];
               
            }
            if(s[i]=='+'||s[i]=='-'){
            ans+=s[i];
                u=true;
            }
            
        }
        cout<<ans<<endl;
        
    //    long long fans=0;
       bool chk1=false;
       bool chk2=false;
      for(int i=0;i<ans.size();i++){
          if(ans[i]=='-'){
              chk1=true;
              
          }
          if(ans[i]=='+'){
              chk2=true;
          }
          
        
        }
        // if(chk1&&chk2){
        //     return 0;
        // }

       long long temp1=0;
       for(int i=0;i<ans.size();i++){
           if(ans[i]=='+'||ans[i]=='-'){
               break;
           }
           else{
               temp1=temp1*10+ans[i]-'0';
               if(temp1>INT_MAX){
           temp1=INT_MAX;
           break;
       }
           }
       }
       
       long long temp2=0;
       if(chk1==false&&chk2==false){
          for(int i=0;i<ans.size();i++){
              temp2=temp2*10+ans[i]-'0';
              if(temp2>INT_MAX){
              temp2=INT_MAX;
              
          }
          }
          
          
       }
       if(ans[0]!='+'||ans[0]!='-'){
           if(chk1||chk2){
               temp2=temp1;
           }
       }
       if(ans[0]=='+'||ans[0]=='-'){
           
           
               for(int i=1;i<ans.size();i++){
                   if(ans[i]==' '){
                       return 0;
                   }
                   if(ans[i]=='+'||ans[i]=='-'){
                       break;
                   }
                   else{
                    temp2=temp2*10+ans[i]-'0';
                      if(chk1){
               if(-temp2<INT_MIN){
                   temp2=INT_MIN;
                   return temp2;
               }
               
               
            //    cout<<endl;
            //    cout<<temp2;
           }
                   }
               
               }
            //    cout<<endl;
           if(chk1){
               if(-temp2<INT_MIN){
                   temp2=INT_MIN;
               }
               
               else{
                   temp2=-temp2;
               }
            //    cout<<endl;
            //    cout<<temp2;
           }
           if(chk2){
               if(temp2>INT_MAX){
                   temp2=INT_MAX;
               }
           }

       }
    return temp2;
      
    }
};