class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    //    brute force
    // vector<int>ans;
    // for(int i=0;i<nums.size();i++){
    //     int anss=0;
    //  for(int j=0;j<nums.size();j++){
    //      if(nums[i]>nums[j]){
    //         anss++;
    //      }
         

    //  }
    //  ans.push_back(anss);
    // }
    // return ans;
    vector<int>ans=nums;
sort(ans.begin(),ans.end());
unordered_map<int,int>m;
for(int i=nums.size()-1; i>=0; i--) {
            m[ans[i]] = i;
        }
for(int i=0;i<nums.size();i++){
  nums[i]=m[nums[i]];
}
return nums;
    }
}; 
// 4568
// 6-0
// 5-1
// 4-2
// 8-3