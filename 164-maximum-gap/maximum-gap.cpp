class Solution {
public:
vector<int>count(vector<int>&arr,int n){
    map<int,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    arr.clear();
    for(auto it:m){
        int count=it.second;
        while(count--){
            arr.push_back(it.first);
        }
    }
    return arr;
}
    int maximumGap(vector<int>& nums) {
        // brute force
        // int maxi=0;
        // if(nums.size()<=1){
        //     return 0;
        // }
        // sort(nums.begin(),nums.end());
       
        // for(int i=0;i<nums.size()-1;i++){
        //     maxi=max(maxi,nums[i+1]-nums[i]);
        // }
        // return maxi;
        int maxi=0;
        if(nums.size()<=1){
            return 0;
        }
        vector<int>ans=count(nums,nums.size());
                 for(int i=0;i<nums.size()-1;i++){
            maxi=max(maxi,nums[i+1]-nums[i]);
        }
        return maxi;
    }
};