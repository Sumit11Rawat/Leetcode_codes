class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
//         int left=0;
//         int n=matrix[0].size()-1;
//         int m=matrix.size()-1;
//         int right=n;
//          if(m==0){
//                if(n==0&&matrix[0][0]!=target){
            
              
//                   return false;  
//                 }
                
               
//             }
//            if(target<matrix[0][0]){
//                return false;
//            }
        
//         while(left<=m&&right<=n){
//             if(target>matrix[left][right]){
//                 left++;
                
//             }
//            else if(target<=matrix[left][right]&&target>=matrix[left][0]){
//                break;
//             }
//         }
//         if(left>m||right>n){
// return false;
//         }
//         int i=0;
//         int j=n;
//         while(i<=j){
//             int mid=i+(j-i)/2;
//             if(matrix[left][mid]==target){
//                 return true;
//             }
//             else if(matrix[left][mid]>target){
//                 j=mid-1;
//             }
//             else{
//                i=mid+1;
//             }
//         }
//         return false;
int low=0;
int high=matrix[0].size()-1;
while(low<matrix.size()&&high>=0){
        if(matrix[low][high]==target){
            return true;
        }
        else if(matrix[low][high]<target){
            low++;
        }
        else{
            high--;
        }
}
     return false;
    }
};