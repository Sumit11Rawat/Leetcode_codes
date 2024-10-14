class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
       long long score=0;
       priority_queue<long long>pq;
       for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
       }
       while(k){
        score+=pq.top();
          long long hold=pq.top()/3;
          k--;
          if(pq.top()%3!=0){
            hold++;
          }
          pq.pop();
          pq.push(hold);
       }
       return score;
    }
};