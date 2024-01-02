class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        int count=0;
        int n=arr.size();
        int low=0;
        sort(arr.begin(),arr.end());
        int ans=0;
        int high=n-1;
        while(low<high){
            if(arr[low]+arr[high]<target){
                ans=ans+(high-low);
                low++;
            }
            else{
                // low++;
                high--;
            }
        }
        return ans;
    }
};
// -1 1 1 2 3