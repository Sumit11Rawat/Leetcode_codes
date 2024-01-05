class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    
        int temp=0;
      
        int maxi=0;
        for(int i=0;i<gain.size();i++){
            temp+=gain[i];
            maxi=max(maxi,temp);
        }
        return maxi;
    }
};