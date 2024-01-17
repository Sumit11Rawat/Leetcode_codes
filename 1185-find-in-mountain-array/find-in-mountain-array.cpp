/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &arr) {
        if(arr.length()<3){
            return -1;
        }
           int i=0;
        int ans=0;
        int j=arr.length()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(arr.get(mid)>arr.get(mid+1)&&arr.get(mid)>arr.get(mid-1)){
                ans=mid;
                break;
            }
            else if(arr.get(mid)<arr.get(mid+1)){
                i=mid+1;
            }
            else{
               j=mid-1;
            }
        }
         i=0;
         j=ans-1;
        
        while(i<=j){
           int midd=i+(j-i)/2;
           int l=arr.get(midd);
            if(l==target){
                return midd;
            }
            else if(l>target){
                j=midd-1;
            }
            else{
                i=midd+1;
            }
        }
        i=ans;
         j=arr.length()-1;
        
        while(i<=j){
           int midd=i+(j-i)/2;
           int l=arr.get(midd);
            if(l==target){
                return midd;
            }
            else if(l>target){
              
                  i=midd+1;
            }
            else{
                j=midd-1;
            }
        }
return -1;
    }
     
};
// 1 2 3 4 5 