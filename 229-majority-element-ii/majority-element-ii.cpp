class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>m;
        set<int>st;
        int s=floor(nums.size()/3);
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>s){
               
                m[nums[i]]--;
                 st.insert(nums[i]);
            }

        }
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
    }
};