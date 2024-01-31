class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      double ans=0;
      double maxi=INT_MIN;
      for(int i=0;i<k;i++){
          ans+=nums[i];

      }
      
      double fans=ans/k;
      maxi=fans;
      for(int i=k;i<nums.size();i++){
          ans+=nums[i]-nums[i-k];
          fans=ans/k;
          maxi=max(maxi,fans);

      }
      return maxi;

    }
};