class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        set<vector<int>>s;//for storing the unique value
        
        int n=nums.size();
        if(n<4){
            return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k=j+1;
                int l=n-1;
                while(k<l){
                     
                    if((long)nums[i]+nums[j]+nums[k]+nums[l]==target){
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                         k++;
                    }
                    else if((long)nums[i]+nums[j]+nums[k]+nums[l]<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                  
                   
                }
                 
                
            }
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};