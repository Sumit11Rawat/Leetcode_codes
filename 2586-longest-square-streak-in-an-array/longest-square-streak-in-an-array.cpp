class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int ans=0;
        int maxi=0;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int i=1;i<=317;i++){
            long long curr=i;
            while(m[curr]){
                ans++;
                curr=curr*curr;
            }
            
            maxi=max(maxi,ans);
            ans=0;
        }

        if(maxi<=1){
            return -1;
        }
        return maxi;
    }
};