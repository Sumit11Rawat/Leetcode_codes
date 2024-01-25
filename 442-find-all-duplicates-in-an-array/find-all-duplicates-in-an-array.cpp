class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>fans;
        for(long i=0;i<nums.size();i++){
            long ans=abs(nums[i])-1;
            if(nums[ans]<0){
                fans.push_back(ans+1);
            }
            else{
            nums[ans]=nums[ans]*(-1);
            }

    }
    return fans;
    }
};
// 4 3 2 -7 8 2 3 1
// 4 3 -2 -7 8 2 3 1
// 4 -3 -2 -7 8 2 -3 -1