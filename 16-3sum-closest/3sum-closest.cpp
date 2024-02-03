class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
               if(diff>abs(target-sum)){
                   ans=sum;
                   diff=abs(target-sum);
               }
                  if(sum>target){
                   
                  k--;
                }
                else{
                    j++;
                }
            //     if(target>=0){
            //      if(mini>=target-sum){
                     
            //        mini=target-sum;
                 
            //        ans=sum;
            //     }
            //     }
            //    if(target<0){
            //         if(mini>=sum-target){
                        
            //        mini=sum-target;
            //        ans=sum;
            //    }
            //     }
                
               
               
            }
        }
        return ans;
    }
};
// -4 -1 1 2
// 0 1 1 1 

// 97
// 3