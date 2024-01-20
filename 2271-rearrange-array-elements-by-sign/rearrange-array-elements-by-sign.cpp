class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        
        while(i<nums.size()){
            if(nums[i]>0){
                ans.push_back(nums[i]);
                
            }
            i++;
        }
         int j=0;
        
        while(j<nums.size()){
            if(nums[j]<0){
                ans.push_back(nums[j]);
                
            }
            
            j++;
        }
        i=0;
        j=nums.size()/2;
      vector<int>fans;
        while(i<nums.size()/2){
          fans.push_back(ans[i]);
          fans.push_back(ans[i+j]);
          i++;
        }
        return fans;
    }
};
// 3 1 2 -2 -5 -4
