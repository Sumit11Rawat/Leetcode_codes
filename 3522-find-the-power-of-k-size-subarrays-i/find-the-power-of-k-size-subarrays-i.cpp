class Solution {
public:
bool is_sorted(vector<int>&arr,int l, int r){
    for(int i=l;i<r;i++){
        if(arr[i+1]!=arr[i]+1){
            return false;
        }
    }
    
    return true;

}

int find_maxi(vector<int>&arr,int l,int r){
    int maxi=0;
    for(int i=l;i<=r;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

    vector<int> resultsArray(vector<int>& nums, int k) {
        // typical sliding window
        // brute force

        int maxi=0;
        vector<int>ans;

        for(int i=0;i<k;i++){
            maxi=max(maxi,nums[i]);
            
        }

        if(is_sorted(nums,0,k-1)){
        ans.push_back(maxi);
        }
        else{
            ans.push_back(-1);
        
        }
        for(int i=k;i<nums.size();i++){

             if(is_sorted(nums,i-k+1,i)){
                int maxx=find_maxi(nums,i-k+1,i);
                ans.push_back(maxx);
             }
             else{
              
                ans.push_back(-1);
             }
             
        }
        return ans;
        
    }
};