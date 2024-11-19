class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        // prefix sum + sliding window

        map<long long ,long long>m;
       

        vector<long long>pref(nums.size()+1);
        pref[0]=0;
        pref[1]=nums[0];
        for(int i=1;i<=nums.size();i++){
            pref[i]=nums[i-1]+pref[i-1];
        }
        
       long long maxi=0;
       long long temp=0;
       bool chk=false;

        for(int i=0;i<k;i++){
            m[nums[i]]++;
            if(m[nums[i]]>1){
            temp++;
            chk=true;
            }
        }
        if(chk==false){
            maxi=pref[k];
        }
        
        for(int i=k;i<nums.size();i++){
            m[nums[i]]++;
           
            if(m[nums[i]]>1){
           temp++;
            }
            if(m[nums[i-k]]>1){
                temp--;
            }
            else{

            }
             m[nums[i-k]]--;
           
           
            if(temp==0){
                maxi=max(maxi,pref[i+1]-pref[i-k+1]);
            }
           
            
            
        }
        return maxi;

        
    }
};
