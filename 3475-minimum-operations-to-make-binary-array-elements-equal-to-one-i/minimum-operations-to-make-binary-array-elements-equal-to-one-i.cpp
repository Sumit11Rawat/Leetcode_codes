class Solution {
public:
    void swaps(vector<int>&nums,int k,int j){
        
    }
    int minOperations(vector<int>& nums) {
        int i=0;
        vector<int>ans(nums.size(),1);
        int count=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==0){
              nums[i]^=1;
              nums[i+1]^=1;
              nums[i+2]^=1;
              count++;
            }
        }
        if(nums==ans){
            return count;
        }
        return -1;

    }
};


