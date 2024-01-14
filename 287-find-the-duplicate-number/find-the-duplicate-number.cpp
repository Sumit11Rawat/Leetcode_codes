class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]){
                ans=nums[i];
            }
            m[nums[i]]++;
            
            
        }

        return ans;
    }
};