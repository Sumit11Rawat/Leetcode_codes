class Solution {
public:
 static bool comp(pair<int,int>&a,pair<int,int>&b){
    if(a.second==b.second){
        return a.first>b.first;
    }
    return a.second<b.second;
}
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>p;
        for(int i=0;i<nums.size();i++){
            p.push_back(make_pair(nums[i],m[nums[i]]));
        }
        sort(p.begin(),p.end(),comp);
        nums.clear();
        for(auto i:p){
            nums.push_back(i.first);
        }
        return nums;
    }

};