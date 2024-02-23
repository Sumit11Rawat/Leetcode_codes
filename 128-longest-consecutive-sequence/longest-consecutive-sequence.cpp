class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int count=0;
        int fans=0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]-1)==m.end()){
                // count++;
                while(m.find(nums[i])!=m.end()){
                    count++;
                    nums[i]++;
                }
            }

            fans=max(fans,count);
            count=0;
        }
        return fans;
    }
};