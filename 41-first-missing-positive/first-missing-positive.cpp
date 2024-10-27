class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int>ans(100001,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0 and nums[i]<=100000){
            ans[nums[i]]++;
            }
        }
        for(int i=1;i<=100000;i++){
            if(ans[i]==0){
                return i;
            }
        }

        return 100001;
    }
};