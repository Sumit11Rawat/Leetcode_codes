class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> s;
        unordered_map<int,bool> m;
        int n1=nums1.size();
        int n2=nums2.size();
        int mini=min(nums1.size(),nums2.size());
        for(int i=0;i<n1;i++){
              m[nums1[i]]=true;
        }
        for(int i=0;i<n2;i++){
            if(m[nums2[i]]){
                s.insert(nums2[i]);
                // ans.push_back(s);
            }
            // m[nums2[i]]=true;
        }
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};