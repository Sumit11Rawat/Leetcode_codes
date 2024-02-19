class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // int i=nums.size()-1;
        int chk=-1;
        int i=nums.size()-1;
         while(i>0){
             if(nums[i]>nums[i-1]){
                 chk=i-1;
                break;
             }
             else{
                 i--;
             }
         }
         if(i==0){
          reverse(nums.begin(),nums.end());
           return;
         }
         
       
       
       
    
    long long j=nums.size()-1;
       int temp=0;
       while(j>chk)
       {
           if(nums[j]>nums[chk]){
           temp=j;
           break;
           }
           else{
               j--;
           }
       }
      
       
    //      cout<<endl;
    //    cout<<nums[temp];
        swap(nums[chk],nums[temp]);
        sort(nums.begin()+chk+1,nums.end());
       
      
          
      
        
    }
};