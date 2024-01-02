class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int j=i+1;
        while(i<n&&j<n){
            if(nums[i]!=0){
                if(nums[j]!=0){
          i++;
          j++;
                }

else{
    i++;
}            }
if(nums[i]==0){
    if(nums[j]!=0){
        swap(nums[i],nums[j]);
    }
    else{
        j++;
    }
}
        }
    }
};