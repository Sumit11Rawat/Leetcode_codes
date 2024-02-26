class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
         
//        unordered_map<char,int>m;
//             for(int i=0;i<str1.size();i++){
//                 m[str1[i]]++;
//             }
//              for(int i=0;i<str2.size();i++){
//                 m[str2[i]]++;
//             }
//         if(str1[0]!=str2[0]){
//             return "";
//         }
//         if(str1[str1.size()-1]!=str2[str2.size()-1]){
//             return "";
//         }
//         if(str1.size()==str2.size()&&str1!=str2){
//             return "";
//         }
//         string ans="";
//         for(int i=0;i<min(str1.size(),str2.size());i++){
//             if(str1[i]==str2[i]){
//                 ans+=str1[i];
                
//             }
//             else{
//                 break;
//             }
//         }
//         string kk="";
//       int k=str1.size()/ans.size();
//       string ll="";
//       int l=str2.size()/ans.size();
//       for(int i=0;i<k;i++){
//           kk+=ans;
//       }
//       for(int i=0;i<l;i++){
//           ll+=ans;
//       }
//       if(kk==str1&&ll==str2){
//           return ans;
//       }
//       cout<<ans<<endl;
//       char s=ans[0];
//       char t=ans[1];
//       string fans="";
//   bool chk=false;
//   if(ans[0]==ans[ans.size()-1]){
//       chk=true;
//   }
             
//           if(m.size()==1){
//                int gcd_length = __gcd(str1.size(), str2.size());
//               return str1.substr(0,gcd_length);
//           }  

//     string xx="";
//     string yy="";
//     yy+=ans[0];
//     if(chk==true){
//         xx+=ans[0];
//           for(int i=1;i<ans.size();i++){
//              xx+=ans[i];
//              yy="";
             
//          for(int j=ans.size()-i-1;j<ans.size();j++){
//                   yy+=ans[j];
//             }
//        if(xx==yy){
//           fans=xx;
//          break; 
//     }
       
//     }
//     }

//      else{
//        for(int i=0;i<ans.size();i++){
//     xx+=ans[i];
//     string yy="";
//     for(int j=ans.size()-i-1;j<ans.size();j++){
//      yy+=ans[j];
//     }
//     if(xx==yy){
//        fans=xx;
//        break; 
//     }
//        }
//      }
// cout<<"he";
//   if(fans==""){
//       fans=ans;
//   }
//       cout<<fans;
      
//           string kkk="";
//        k=str1.size()/fans.size();
//       string lll="";
//        l=str2.size()/fans.size();
//       for(int i=0;i<k;i++){
//           kkk+=fans;
//       }
//       for(int i=0;i<l;i++){
//           lll+=fans;
//       }
//       if(kkk==str1&&lll==str2){
//           return fans;
//       }
          
      
//        return "";
   if(str1+str2!=str2+str1){
       return "";

   }
   int gcde=gcd(str1.size(),str2.size());
   return str1.substr(0,gcde);
    }
};