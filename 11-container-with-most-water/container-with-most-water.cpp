class Solution {
public:
    int maxArea(vector<int>& height) {
        // brute force
        // int ans=INT_MIN;
        
        // for(int i=0;i<height.size();i++){
        //     int maxi=INT_MIN;
        //     for(int j=i;j<height.size();j++){
        //           maxi=max(maxi,min(height[j],height[i])*(j-i));
                  
        //     }
        //     ans=max(ans,maxi);
        // }
        // return ans;
        int ans=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            ans=max(ans,min(height[i],height[j])*abs(j-i));
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};