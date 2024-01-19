class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
             return nums[0];
        }
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(nums[i]!=nums[i+1]){
                    ans=nums[0];
                    break;
                }
            }
            if(i==nums.size()-1){
                if(nums[i]!=nums[i-1]){
                     ans=nums[i];
                     break;
                }
            }
            else{
            if(nums[i]!=nums[i+1]&&nums[i]!=nums[i-1]){
                 ans=nums[i];
                 break;
            }
            }
        }
        return ans;
    }
};