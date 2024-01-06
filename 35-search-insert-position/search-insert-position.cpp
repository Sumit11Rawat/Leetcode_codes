class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]>=target){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        if(nums[nums.size()-1]<target){
            ans= nums.size();
        }
return ans;
    }
};