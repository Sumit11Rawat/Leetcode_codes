class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    //    brute force
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        int anss=0;
     for(int j=0;j<nums.size();j++){
         if(nums[i]>nums[j]){
            anss++;
         }
         

     }
     ans.push_back(anss);
    }
    return ans;
    }
};