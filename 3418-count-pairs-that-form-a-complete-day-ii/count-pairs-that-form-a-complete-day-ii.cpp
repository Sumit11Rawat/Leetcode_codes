class Solution {
public:
    long long countCompleteDayPairs(vector<int>& ans) {
        map<long long,long long>m;
        int n=ans.size();
        for(int i=0;i<n;i++){
            m[ans[i]%24]++;
        }

        long long count=0;
        map<long long ,long long>m1;
         for(int i=0;i<n;i++){
            
                if(m[(24-ans[i]%24)%24]>=1){
                        m[ans[i]%24]--;
                    count+=m[(24-ans[i]%24)%24];
                }
            
         }
        return count;
        
    }
};