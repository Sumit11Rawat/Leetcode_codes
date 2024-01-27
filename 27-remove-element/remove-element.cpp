class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==1){
            if(nums[0]==val){
                nums.empty();
                nums={};
                return 0;
            }
        }
        int ans=0;
        int i=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==val){
               nums.erase(nums.begin()+i);
            //    nums.push_back(nums[i]);
               i--;
               ans++;
           }
           
       }
        return nums.size();
    }
};