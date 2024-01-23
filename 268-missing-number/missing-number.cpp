class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans=-1;
        for(int i=0;i<=nums.size();i++){
            if(!m[i]){
                ans=i;
            }
        }
        return ans;
    }
};