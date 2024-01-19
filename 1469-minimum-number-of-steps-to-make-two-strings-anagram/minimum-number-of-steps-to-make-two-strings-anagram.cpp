class Solution {
public:
    int minSteps(string s, string t) {
        int common=0;
        unordered_map<int,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(m[t[i]]){
                common++;
                m[t[i]]--;
            }
        }
        return t.size()-common;
    }
};