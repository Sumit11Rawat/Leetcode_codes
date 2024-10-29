class Solution {
public:
    long long maxScore(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0]*nums[0];
        }
        long long maxi=0;

        for(int i=0;i<nums.size();i++){
            long long gcd=nums[0];
           
            long long lcm=nums[0];
            for(int j=1;j<nums.size();j++){
                 if(j!=i){

                  gcd=__gcd((long long)nums[j],gcd);
                  lcm=(lcm*nums[j])/__gcd(lcm,(long long)nums[j]);
                 }
            }
            maxi=max(maxi,lcm*gcd);
            cout<<maxi<<endl;
        }
    long long gcd1=nums[1];
        long long lcm1=nums[1];
        for(int i=2;i<nums.size();i++){
            gcd1=__gcd((long long)nums[i],gcd1);
            lcm1=(lcm1*nums[i])/__gcd(lcm1,(long long)nums[i]);
        }
        maxi=max(maxi,lcm1*gcd1);
        return maxi;
    }
};