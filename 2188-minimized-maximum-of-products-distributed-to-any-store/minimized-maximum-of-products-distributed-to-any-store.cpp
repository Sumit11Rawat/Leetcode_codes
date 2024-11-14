class Solution {
public:
bool binary_search(vector<int>&nums,int mid,int n){

    int count=0;
    for(int i=0;i<nums.size();i++){
        count+=ceil(nums[i]*1.0/mid);
    }
// if(count<=n) then this is the answer
    return count<=n;

}
    int minimizedMaximum(int n, vector<int>& quantities) {
        //  to minimise maximum
        // binary search all the val from 1 to 10^5
       
        sort(quantities.begin(),quantities.end());

        int i=1;
        int j=quantities[quantities.size()-1];
        int ans=quantities[quantities.size()-1];

        while(i<=j){
            int mid=(i+j)/2;

            if(binary_search(quantities,mid,n)){
                ans=min(ans,mid);
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
       
    }
};
