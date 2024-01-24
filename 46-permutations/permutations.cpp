class Solution {
public:
void chk(vector<vector<int>>&fans,vector<int>&ans,vector<int>&freq,vector<int>&nums){
    if(ans.size()==nums.size()){
        fans.push_back(ans);
        return ;
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            freq[i]=1;
            ans.push_back(nums[i]);
            chk(fans,ans,freq,nums);
            freq[i]=0;
            ans.pop_back();

        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>fans;
        vector<int>ans;
        vector<int>freq(nums.size(),0);
        chk(fans,ans,freq,nums);
        return fans;
    }
};