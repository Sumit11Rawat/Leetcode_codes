class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
    //    unordered_map<char,int>m1;
    // //    for(int i=0;i<jewels.size();i++){
    // //        m1[jewels[i]]++;
    // //    }
       unordered_map<char,int>m2;
       for(int i=0;i<stones.size();i++){
           m2[stones[i]]++;
       }
    //    for(int i=0;i<max(jewels.size(),stones.size());i++){
    //        if(m2[jewels[i]]){
    //            ans=ans+m2[jewels[i]];
    //        }
    //    }
    int n=jewels.size();
   for(int i=0;i<n;i++){
       if(m2[jewels[i]]){
           ans+=m2[jewels[i]];
       }
   }
        return ans;
    }
};