class Solution {
public:
    long long minimumSteps(string s) {
        long long count=0;
        int i=0;
        int j=s.size()-1;
        while(s[i]=='0'){
            i++;

        }
        if(i==s.size()){
            return 0;
        }
        for(int k=i+1;k<s.size();k++){
            if(s[k]=='0'){
                count+=k-i;
                i++;

            }
            
        }
        return count;
        
    }
};
// 1001000