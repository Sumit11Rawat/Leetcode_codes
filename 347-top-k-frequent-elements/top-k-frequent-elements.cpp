class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        set<int>s;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        while(k>0){
            int maxi=0;
            int f=0;
            for(int i=0;i<nums.size();i++){
                if(maxi<=m[nums[i]]&&m[nums[i]]){
                    maxi=m[nums[i]];
                    f=nums[i];
                   
                    
                    
                }

            }
            ans.push_back(f);
           m[f]=0;
            
            k--;
        }
        // for(auto i:s){
        //     ans.push_back(i);
        // }
        return ans;

    }
};