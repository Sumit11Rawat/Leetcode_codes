class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1){
            // if(nums[0]>=0){
                return true;
            // }
        }
        int i=0;
        int maxi=0;
        int chk=0;

        for( i=0;i<nums.size();i++){
            if(nums[i]==0&&i!=nums.size()-1){
                // if(i-chk>=maxi){
                //     return false;
                // }
                bool temp=false;
                for(int j=chk;j<i;j++){
                    if(i-j<nums[j]){
                        temp=true;
                    }
                }
                if(!temp){
                    return false;
                }
                
            }
            if(maxi<nums[i]){
                maxi=nums[i];
                chk=i;
            }
            // i=nums[i]+i;
            // i--;
            if(i>=nums.size()-1){
            return true;
        }
        // i--;
        }
        // if(i==nums.size()-1){
        //     return true;
        // }
        // // return false;
        return true;
    }

};