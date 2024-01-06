class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=(nums[nums[i]]%1000)*1000+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]/=1000;
        }
       
        return nums;
    }
};
// 0 2    1     5     3     4
// 0 1002 2001  4005. 5003. 3004
