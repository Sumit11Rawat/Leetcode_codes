class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //  brute force -->giving tle

        // int i=0;
        // int j=0;
        // while(i<nums.size()){
        //     if(nums[i]==nums[j]){
        //         if(abs(i-j)<=k&&i!=j){
        //             return true;
        //         }
        //         else{
        //             j++;
        //         }
        //     }
        //     else{
        //         j++;
        //     }
        //     if(j==nums.size()){
        //         i++;
        //         j=i;
                
        //     }
        // }
        // return false;
      
    //   optimised -->using hashmap
    unordered_map<int,int>m;
    for(auto i:nums){
        m[i]=-1;
    }
    int i=0;
    while(i<nums.size()){
      if(m[nums[i]]==-1){
          m[nums[i]]=i;
          i++;
      }
    else{
          if(abs(i-m[nums[i]])<=k){
              return true;
          }
          else{
              m[nums[i]]=i;
            i++;
          }
      
      }

    }

return false;
    }
};