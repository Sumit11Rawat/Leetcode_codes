class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
    //    brute force
//         unordered_map<int,int>h;
//         for(int i=0;i<nums.size();i++){
//             h[i]=-1;
//         }
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             if(h[i]==-1){
//                 h[i]++;
//                 int chk=0;
//                 for(int j=0;j<nums.size();j++){
                   
//                     if(nums[j]==k-nums[i]&&h[j]==-1&&chk==0){
//                         h[j]++;
//                         cout<<j<<endl;
//                         count++;
//                         chk=1;
//                     }
                    
                    
//                 }
//                 if(chk==0){
//                     h[i]--;
//                 }
//             }
//             else{
//                 // continue;
//             }
//         }
// return count;

// using two pointer

sort(nums.begin(),nums.end());
int count=0;
 int a=0;
 int b=nums.size()-1;
 while(a<b){
     if(nums[a]+nums[b]==k){
         count++;
         a++;
         b--;
     }
     else if(nums[a]+nums[b]<k){
         a++;
     }
     else{
         b--;
     }
 }
 return count;
     
    


    
    }
};