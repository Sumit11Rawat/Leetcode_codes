class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // brute force
        // unordered_map<int,int>m;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }
        // int ans=-1;
        // for(int i=0;i<=nums.size();i++){
        //     if(!m[i]){
        //         ans=i;
        //     }
        // }
        // return ans;
        int sum=nums.size()*(nums.size()+1)/2;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
        }
        return sum-ans;
    }
};