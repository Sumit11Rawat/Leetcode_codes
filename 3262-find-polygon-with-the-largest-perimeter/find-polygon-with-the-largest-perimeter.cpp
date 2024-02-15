class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long fans=-1;
        vector<long long>ans;
        // for(int i=1;i<nums.size();i++){
        //      ans[i-1]=nums[i-1]+ans[i-2];
        // }
        for(int i=0;i<nums.size();i++){
            if(i==0){
               ans.push_back(nums[i]);
            }
            else{
              ans.push_back(ans[i-1]+nums[i]);
            }
        }
        
        long long count=0;
        for(int i=0;i<ans.size();i++){
          
           if((i==ans.size()-1)){
            //    if(fans>0&&count>0){
            //    fans=ans[i];
            //     break;
            //    }
               
               if(fans==-1&&count>0){
                   fans=-1;
                // break;
               }
               else{
                   break;
               }
            //    if(count>0&&fans>0){
            //        break;
            //    }
                
            }
           else if(ans[i]==nums[i+1]){
                count++;
            }
           else if(ans[i]>nums[i+1]){
                fans=ans[i+1];
                // break;
            }
        //    else if(ans[i]<nums[i+1]){
        //         break;
        //     }
        }
        return fans;
    }
};
// 1 1 2  3  5  12 50
// 1 2 4  7  12 24  74
// 5 5  50
// 5 10 60
//   5 5  5
//   5 10 15
//  1 1 2
//  1 2 4