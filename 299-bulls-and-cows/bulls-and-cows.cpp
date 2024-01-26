class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                bulls++;
            }
        }
        unordered_map<char,int>m;
        for(int i=0;i<secret.size();i++){
            m[secret[i]]++;
        }
        int uncommon=0;
        for(int i=0;i<secret.size();i++){
            if(!m[guess[i]]){
                uncommon++;
            }
            else{
                m[guess[i]]--;
            }
        }
        int cows=secret.size()-uncommon-bulls;
        string ans="";
        ans+=to_string(bulls);
        ans+='A';
        ans+=to_string(cows);
        ans+='B';
        return ans;
    }
};