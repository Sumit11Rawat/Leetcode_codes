class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(m[arr[i]]==arr[i]){
                ans=max(ans,arr[i]);
                m[arr[i]]--;
            }
        }
        
        return ans;
    }
};