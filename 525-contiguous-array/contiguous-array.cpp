class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp.insert({0,-1});
        int maxLength =0 ,count=0;

        for(int i=0;i<nums.size();i++){
            count = count + (nums[i] == 1 ? 1 : -1);
            if(mp.find(count)!=mp.end()){
                maxLength = max (maxLength, i - mp[count]);
            } else{
                mp.insert({count,i});
            }
        }

         return maxLength;
    }

   
};


