class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int i=0;
        int j=0;
        int count=0;
        int ans=0;
        if(s.size()==0){
            return 0;
        }
        while(j<s.size()&&i<s.size()){
            if(m[s[j]]==0){
                
                m[s[j]]++;
                j++;
            }
           else if(m[s[j]]==1){
                while(m[s[j]]>0){
                   m[s[i]]--;
                   i++;
                }
                // m[s[j]]++;
            }
            ans=max(ans,j-i+1);
        }


return ans-1;
    }
};