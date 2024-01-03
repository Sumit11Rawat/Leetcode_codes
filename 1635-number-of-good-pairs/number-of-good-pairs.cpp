class Solution {
public:
    int numIdenticalPairs(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        int j=n-1;
        int ans=0;
        while(i<j){
            if(arr[i]==arr[j]){
                 ans=ans+(j-i);
                 i++;
                 j=n-1;
            }
            
            else {
                if( i==j-1){
                   i++;
                   j=n-1;
                }
                else{
                j--;
                }
            }
        }
        return ans;
    }
};
// 111223
//    i. j
// 3