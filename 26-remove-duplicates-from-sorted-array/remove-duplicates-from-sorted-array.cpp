class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int k=0;
       int ans=0;
        int si=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1){
                continue;
            }
           if(nums[i]==nums[i+1]){
               nums.erase(nums.begin()+i);
            //    nums.push_back(nums[i]);
               i--;
               ans++;
           }
           
       }
        return si-ans;
    }
};