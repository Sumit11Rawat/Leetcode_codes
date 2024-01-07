class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]>=target){
                if(nums[mid]==target){
                first=mid;
                }
               
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        int second=-1;
         i=0;
         j=nums.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]>=target){
                if(nums[mid]==target){
                    second=mid;
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            else{
             i=mid+1;
            }
        }
        return {first,second};
    }
};