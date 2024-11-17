class Solution {
public:
using ll=long long;
    int shortestSubarray(vector<int>& nums, int k) {
        // prefix sum + min priority queue
        
        vector<ll>pref(nums.size());
        pref[0]=nums[0];
        for(int i=1;i<nums.size();i++){
           pref[i]=pref[i-1]+nums[i];
        }
   
        priority_queue <pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>>pq;
        ll mini=LLONG_MAX;
        for(ll i=0;i<nums.size();i++){
            
            if(pref[i]>=k){
                mini=min(mini,i+1);
            }
           while(pq.size() and pref[i]-pq.top().first>=k ){
                mini=min(mini,i-pq.top().second);
                pq.pop();
            }
            pq.push({pref[i],i});
        }
        if(mini==INT_MAX){
            return -1;
        }
        return mini;

    }
};