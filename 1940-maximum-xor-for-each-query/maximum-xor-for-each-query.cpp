class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        // simply find the xor  of all bits in array element 
        // the unset bit is the anwer


       vector<int>prefix(nums.size());
       prefix[0]=nums[0];

       for(int i=1;i<nums.size();i++){
        prefix[i]=prefix[i-1]^nums[i];
       }

      int maxi=0;
      for(int i=0;i<nums.size();i++){
        maxi=max(maxi,nums[i]);
      }

       vector<int>ans(nums.size());
       int k=0;

       for(int i=nums.size()-1;i>=0;i--){
           long long fans=0;
         for(int j=0;j<maximumBit;j++){
            if((prefix[i]&(1<<j))==0){
                fans+=1<<j;
            }
         }

         ans[k]=fans;
         k++;

       }
    return ans;
    }
};
