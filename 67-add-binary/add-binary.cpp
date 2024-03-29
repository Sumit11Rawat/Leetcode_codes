class Solution {
public:
    string addBinary(string a, string b) {
      string ans="";
      int i=a.size()-1;
      int j=b.size()-1;
      int carry =0;
      while(i>=0&&j>=0){
          if(a[i]=='0'&&b[j]=='0'){
              ans+=to_string(a[i]-'0'+carry);
              carry=0;
          }
          else if(a[i]=='1'&&b[j]=='1'){
              if(carry==0){
              ans+='0';
              carry=1;
              }
              else{
                  ans+='1';
                  carry=1;
              }
              
          }
          else if(a[i]=='0'&&b[j]=='1'||a[i]=='1'&&b[j]=='0'){
              if(carry==0){
                  ans+='1';
                  carry=0;

              }
              else{
                  ans+='0';
                  carry=1;
              }
          }
          
          i--;
          j--;
      }
      while(i>=0){
          if(a[i]=='0'&&carry==0){
              ans+='0';
              carry=0;
          }
          else if(a[i]=='1'&&carry==0||a[i]=='0'&&carry==1){
              ans+='1';
              carry=0;
          }
          else{
              ans+='0';
              carry=1;
          }
          i--;
      }
      while(j>=0){
          if(b[j]=='0'&&carry==0){
              ans+='0';
              carry=0;
          }
          else if(b[j]=='1'&&carry==0||b[j]=='0'&&carry==1){
              ans+='1';
              carry=0;
          }
         else if(b[j]=='1'&&carry==1){
              ans+='0';
              carry=1;
          }
          j--;
      }
      
if(carry){
          ans+='1';
      }

reverse(ans.begin(),ans.end());
return ans;
    }
};