class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans=0;
        int fans=0;
        if(tokens.size()==0){
            return 0;
        }
        bool t=false;
        if(tokens.size()==1){
            if(tokens[0]<=power){
                return 1;
            }
        }
        sort(tokens.begin(),tokens.end());
        if(tokens[0]>power){
            return 0;
        }

        int b;
        // fans=ans;
        int chk=0;
        int k=tokens.size()-1;
         int temp;
        //  power=0;
         int j=0;
        while(j<=k){
// 0 6 37 39 42 45 49 52 59 68 
        for(int i=j;i<tokens.size();i++){
            if(power>=tokens[i]){
                power-=tokens[i];
                ans++;
                j=i;
                
            }
            else{
                break;
            }
        }
        chk=max(ans,chk);
        // b=power;
    if(ans==0){
      break;
    }
   ans--;
//   for(int i=k;i<tokens.size();i++){
      power+=tokens[k];
//   }

//    for(int i=j+1;i<tokens.size();i++){
//             if(power>=tokens[i]){
//                 power-=tokens[i];
//                 // temp++;
//                 ans++;
//                 // j=
//             }
//             // if(i==k){
//             //     t=true;
//             //     break;
//             // }
//         }
//         if(t){
//             break;
//         }
        chk=max(ans,chk);
        cout<<chk<<endl;
       k--;
    j++;
    
       
        }
      
       


        return chk;
    }
};
// 4 24 28 33 96 
// 10 33 34 41 47 48 70 84 91 98
// 0 6 37 39 42 45 49 52 59 68
// 6 26 36 43 45 68 70 78 87 91  