class Solution {
public:

    int maxProduct(vector<int>& nums) {
        // brute force
    //     int ans=INT_MIN;
    //     int i=0;
    //      while(i<nums.size()){
    //          int product=1;
    //          for(int j=i;j<nums.size();j++){

    //              product=product*nums[j];
    //              if(product>ans){
    //                  ans=product;
    //              }
    //          }

    //          i++;
             
    //      }
    //      return ans;
              int ans=INT_MIN;
              int product=1;
              for(int i=0;i<nums.size();i++){
                  product=product*nums[i];
                  ans=max(ans,product);
                  if(product==0){
                      product=1;
                  }
              }
              product=1;
               for(int i=nums.size()-1;i>=0;i--){
                  product=product*nums[i];
                  ans=max(ans,product);
                  if(product==0){
                      product=1;
                  }
              }
              return ans;
    }
};