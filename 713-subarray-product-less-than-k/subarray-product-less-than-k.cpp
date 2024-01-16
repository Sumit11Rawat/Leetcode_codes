class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // brute force-1

        // double ans=0;
     
        // for(int i=0;i<nums.size();i++){
        //        int product=1;
        //        int j=i;
        //           for(int j=i;j<nums.size();j++){
        //               if(product>=k){
        //                   break;
        //               }
        //               product*=nums[j];
        //               if(product<k){
        //                   ans++;
        //               }
        //           }
        // }
        // return ans;

        // brute force 2

        // int ans=0;
        // int left=0;
        // int right=0;
        // int product=1;
        // while(left<nums.size()){
        //      if(right>=nums.size()){
        //        left++;
        //        right=left;
        //        product=1;
        //    }
        //    if(left>=nums.size()){
        //        break;
        //    }
        //    product*=nums[right];
        //     if(product>=k){
        //         left=left+1;
        //         right=left;
        //        product=1;
        //     }
          
            
        //     else{
        //        ans++;
        //        right=right+1;
              
        //    }
          
            
        // }
        // return ans;

        // optimised approach
        if(k<=1){
            return 0;
        }
        int ans=0;
        int left=0;
        int right=0;
        int product=1;
        while(right<nums.size()){
            product*=nums[right];
            while(product>=k){
                product=product/nums[left];
                left++;
            }
            ans+=right-left+1;
            right++;
        }
        return ans;
    }
};
