class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
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