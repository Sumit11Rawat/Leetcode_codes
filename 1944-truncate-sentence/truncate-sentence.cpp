class Solution {
public:
    string truncateSentence(string s, int d) {
        string ans;
        int i=0;
        int k=d+1;
        int n=s.size();
        while(k>0&&i<n){
            if(s[i]==' '){
                k--;

            }
            if(k==1){

                break;
            }
            ans+=s[i];
            i++;
            
        }
        return ans;
    }
};