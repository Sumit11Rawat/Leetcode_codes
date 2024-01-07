class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        int ans=0;
        int j=arr.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
                ans=mid;
                break;
            }
            else if(arr[mid]<arr[mid+1]){
                i=mid+1;
            }
            else{
               j=mid-1;
            }
        }
        return ans;
    }
}; 
// 1 2 3 4 5 4 3 2
//         i.m.  j