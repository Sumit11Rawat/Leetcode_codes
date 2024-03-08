class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<int>pq;
        for(auto i:m){
            pq.push(i.second);
        }
    //     vector<int>ans;
    //    for(auto i:m){
    //        ans.push_back(i.second);
    //    }
    //    sort(ans.begin(),ans.end());
    //    reverse(ans.begin(),ans.end());
    //    int sum=ans[0];
    //    int fans=0;
    // //    int i=0;
    // cout<<ans.size();
    int ans=pq.top();
    int fans=0;
    int n=pq.size();
       for(int i=0;i<n;i++){
           if(pq.top()==ans){
               fans+=pq.top();
               pq.pop();
           }
           else{
               break;
           }
       }

        return fans;
    }
};