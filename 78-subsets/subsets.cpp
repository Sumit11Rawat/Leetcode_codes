class Solution {
public:
void chk(vector<int>&nums,int i,vector<int>ans,vector<vector<int>>&fans){
    if(i==nums.size()){
          fans.push_back(ans);
          return;
        }
        ans.push_back(nums[i]);
        chk(nums,i+1,ans,fans);
        ans.pop_back();
        chk(nums,i+1,ans,fans);
        return;
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>fans;
           vector<int>ans;
           chk(nums,0,ans,fans);
       sort(fans.begin(),fans.end());
       return fans;
        
    }
};