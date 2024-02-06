class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        if(nums.size()==1){
            if(nums[0]<target){
                return 0;
            }
        }
        long sum=0;
        int count=0;
        int i=0,j=0;
        int ans=INT_MAX;
        bool flag=false;
        while(j<nums.size()&&i<nums.size()){
            if(sum<target){
                if(flag==false){
                  sum+=nums[j];
                }
                
                j++;
                
                count++;
            }
            if(sum>=target){
               if(j>=nums.size()){
                    
                    
                    j=nums.size()-1;
                    flag=true;
                }
                ans=min(ans,count);
                sum-=nums[i];
               i++;
               count--;
                
            }
            }
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};