class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // if(nums.size()==1){
        //     return 1;
        // }
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<int>pq;
        for(auto i:m){
            pq.push(i.second);
        }
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