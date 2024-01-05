class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string ans="";
        for(int i=0;i<nums.size();i++){
            ans+=(to_string(nums[i]));
        }
   
       while(!nums.empty()){
           nums.pop_back();
       }
       int i=0;
        while(i<ans.size()){
            nums.push_back(int(ans[i])-48);
            i++;
        }
        // reverse(nums.begin(),nums.end());
        return nums;
    }
};