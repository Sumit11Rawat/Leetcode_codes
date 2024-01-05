class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
           maxi=max(maxi,nums[i]);
           mini=min(mini,nums[i]);
        }
        int ans=1;
        for(int i=1;i<=mini;i++){
            if(mini%i==0&&maxi%i==0){
                ans=max(ans,i);
            }
        }
return ans;
    }
};