class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(i==0){
                continue;
            }
            else{
                nums[i]=nums[i]+nums[i-1];
            }
        }
        return nums;
    }
};