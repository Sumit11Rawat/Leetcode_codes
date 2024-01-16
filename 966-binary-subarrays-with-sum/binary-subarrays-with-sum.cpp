class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //  brute force
        // int ans=0;
    
        // for(int i=0;i<nums.size();i++){
        //         int sum=0;
        //         int j=i;
        //    while(sum<=goal&&j<nums.size()){
              
                
        //          if(sum>goal){
        //           break;
        //       }
        //       sum+=nums[j];
        //       j++;
        //       if(sum==goal){
        //           ans++;
        //       }
              
        //    }
        // }
        // return ans;

        //optimal approach
        if(goal<0){
            return 0;
        }
        
        int n = nums.size(), count = 0, i = 0, j = 0, sum = 0;
        while(j < n){
            sum += nums[j];
            
            while(i <= j && sum > goal)
                sum -= nums[i++];
            count+=j-i+1;
            j++;
        }
        i=0,j=0,sum=0;
        int count1=0;
      while(j < n){
            sum += nums[j];
            
            while(i <= j && sum > goal-1)
                sum -= nums[i++];
             count1+=j-i+1;
            j++;
        }
        return count-count1;
    }
};