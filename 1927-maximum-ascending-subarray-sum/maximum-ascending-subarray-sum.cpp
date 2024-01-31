class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
    //   if(nums.size()==1){
    //       return nums[0];
    //   }
    //    int maxi=nums[0];
    //     int ans=1;
    //     int sum=0;
    //     int chk=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i+1]>nums[i]){
    //             sum+=nums[i]; 
                
    //         }
    //       else{
    //           sum+=nums[i];
    //           chk++;
    //            maxi=max(maxi,sum);
    //            sum=0;  
    //       }
    //     }
    //     // if(nums[nums.size()-1]>nums[nums.size()-2]){
    //     //     maxi+=nums[nums.size()-1];
    //     // }
    //     return maxi;
    
 int maxx = nums[0];
        int sum = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                sum+=nums[i];
            }
            else
            {
                sum=nums[i];
            }
            maxx = max(maxx,sum);
        }
        return maxx;
    }
};