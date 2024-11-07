class Solution {
public:
    int largestCombination(vector<int>& ans) {
    
        // simply find the largest occuring set bit common in all the elements of array
    
        map<int,int>m;
    
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<32;j++){
                if((ans[i])&(1<<j)){
                    m[j]++;
                }
            }
        }
        int maxi=0;
        for(auto i:m){
            maxi=max(maxi,i.second);
            cout<<i.first<<" "<<i.second<<endl;
        }
        return maxi;
    }
};