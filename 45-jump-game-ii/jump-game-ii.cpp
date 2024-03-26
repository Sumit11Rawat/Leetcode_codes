class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int maxi=n-1;
        int count=0;
        for(int i=0;i<n;i++){
            // while(maxi)
            
            for(int j=0;j<maxi;j++){
                // j--;
                // j=nums[j]+j;
                // j=
                if(j+nums[j]>=maxi){
                    count++;
                    maxi=j;
                    break;
                }
                // j--;
            }
            if(maxi==0){
                break;
            }

        }
        return count;
    }
};