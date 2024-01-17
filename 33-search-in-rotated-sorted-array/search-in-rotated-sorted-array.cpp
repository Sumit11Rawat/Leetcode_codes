class Solution {
public:
    int search(vector<int>& arr, int target) {
        int i=0;
        int ans=0;
        int j=arr.size()-1;
        // while(i<=j){
        //     int mid=i+(j-i)/2;
        //     if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
        //         ans=mid;
        //         break;
        //     }
        //     else if(arr[mid]<arr[mid+1]){
        //         i=mid+1;
        //     }
        //     else{
        //        j=mid-1;
        //     }
        // }
          int left = 0;
    int right = arr.size() - 1;

    while (left <right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    ans=left;
         i=0;
         j=ans-1;
         int fans=-1;
        
        while(i<=j){
           int midd=i+(j-i)/2;
           int l=arr[midd];
            if(l==target){
                fans=midd;
               return fans;
            }
            else if(l>target){
                j=midd-1;
            }
            else{
                i=midd+1;
            }
           }
        i=ans;
         j=arr.size()-1;
        
        while(i<=j){
           int middd=i+(j-i)/2;
          
            if(arr[middd]==target){
               fans=middd;
               break;
            }
            else if(arr[middd]>target){
              j=middd-1;
                  
            }
            else{
                i=middd+1;
            }
        }
        return fans;
    }
};