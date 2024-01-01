class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int sum=0;
        int n=nums.size();
        if(n==1){
        return {0};    
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
        sum+=nums[i];
        }
        int a;
        for(int i=0;i<n;i++){
            // if(i==0){
            //      a=sum-nums[i];
            //     ans.push_back(a);
            // }
            if(i==n-1){
                int a=sum-nums[i];
                ans.push_back(a);
            }
            else{
                int left=0;
                int right=0;
                for(int j=0;j<i;j++){
                    left+=nums[j];
                }
                 for(int j=i+1;j<n;j++){
                    right+=nums[j];
                }
                a=abs(left-right);
                ans.push_back(a);
            }
        }
        return ans;
    }
};