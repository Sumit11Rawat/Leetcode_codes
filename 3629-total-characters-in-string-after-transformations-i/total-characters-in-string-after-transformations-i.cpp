class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        vector<int>ans(26,0);
       
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto i:m){
            ans[i.first-'a']=i.second;
        }
        for(int i=0;i<t;i++){
            long long hold=ans[25];
            for(int i=25;i>=1;i--){
                ans[i]=ans[i-1];
            }
            ans[0]=hold;
            ans[1]=(ans[1]+hold)%1000000007;
        }
        long long count=0;
        for(int i=0;i<26;i++){
            count=(count+ans[i])%1000000007;
        }
        return count;

        
        
    }
};