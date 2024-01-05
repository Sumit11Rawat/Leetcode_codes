class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==2){
            if(nums[0]==nums[1]&&nums[0]==1&&nums[1]==1){
                return true;
            }
        }
        
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
       unordered_map<int,int>m;
       for(int i=0;i<nums.size();i++){
           m[nums[i]]++;
       }
       for(int i=01;i<=maxi;i++){
           if(!m[i]){
               return false;
           }
       }
       if(m[maxi]>1&&maxi==nums.size()-1&&nums[0]!=nums[nums.size()-1]&&nums[nums.size()-1]==nums[nums.size()-2]){
           return true;
       }
       else{
           return false;
       }
    }
};