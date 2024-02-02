class Solution {
public:
// function for brute force
// bool issequential(int i){
//     string ans="";

//     while(i>0){
//         ans+=to_string(i%10);
//         i/=10;
//     }
//     reverse(ans.begin(),ans.end());
//     for(int i=1;i<ans.size();i++){
//         if(ans[i]!=ans[i-1]+1){
//             return false;
//         }
//     }
//     return true;
// }
    vector<int> sequentialDigits(int low, int high) {
        // brute force
        // vector<int>ans;
        // for(int i=low;i<high;i++){
            
        //    if(issequential(i)){
        //        ans.push_back(i);
        //    }
        // }
        // return ans;
        vector<int>fans;
      string ans="123456789";
       for(int i=0;i<ans.size();i++){
           string a="";
           for(int j=i;j<ans.size();j++){
               a+=ans[j];
               int chk=stoi(a);
               if(chk>=low&&chk<=high){
                   fans.push_back(chk);
               }
           }
       }
       sort(fans.begin(),fans.end());
       return fans;
    }
};