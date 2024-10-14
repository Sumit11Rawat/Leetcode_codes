class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int ans=0;
        for(int i=0;i<=1000;i++){
            int ind=lower_bound(citations.begin(),citations.end(),i)-citations.begin();
            if(citations.size()-ind+1>=i+1){
                ans=i;
            }
        }
        return ans;
    }
};