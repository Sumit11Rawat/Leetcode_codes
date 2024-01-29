class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // xor approach
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=nums[i]^ans;
        }
        return ans;
        // if(nums.size()==1){
        //     return nums[0];
        // }
        // if(nums[0]!=nums[1]){
        //     return nums[0];
        // }
        // int i=0;
        // int ans=0;
        // int j=nums.size()-1;
        // while(i<=j){
            
        //     int mid=i+(j-i)/2;
            
        //     if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
        //         ans=nums[mid];
        //         break;
        //     }
            
        //     else if(mid%2!=0){
        //         if(nums[mid]!=nums[mid+1]){
        //             i=mid+1;
        //         }
        //         else{
        //         j=mid-1;
        //         }
        //     }
        //     else if(mid%2==0){
        //         if(nums[mid]!=nums[mid+1]){
        //             j=mid-1;
        //         }
        //         else{
        //             i=mid+1;
        //         }
        //     }
        // }
        // return ans;
    }
}; 
