class Solution {
public:
  
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        // binary search from lower-nums[i] to upper-nums[i]

        sort(nums.begin(),nums.end());
     
        long long count=0;
        for(int i=0;i<nums.size();i++){
        
            long long ind1=lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i])-nums.begin();
            long long ind2=upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i])-nums.begin();
                count+=ind2-ind1;

        }
        return count;
       
        
    }
};
