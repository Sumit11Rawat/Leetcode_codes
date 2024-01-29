class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
           s.insert(nums[i]);
            int m=nums[i];
            int ans=0;
            while(m>0){
                ans=ans*10+m%10;
               m/=10;
            }
            s.insert(ans);
        //    nums.push_back(ans);
            
        }
        
        return s.size();
    }
};