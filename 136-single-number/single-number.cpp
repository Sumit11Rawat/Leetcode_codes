class Solution {
public:
    int singleNumber(vector<int>& arr) {
        
        int n=arr.size();
        if(n==1){
            return arr[0];
        }
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int ans;
        for(int i=0;i<n;i++){
            if(m[arr[i]]==1){
            ans=arr[i];
            }
        }
        return ans;
    }
};