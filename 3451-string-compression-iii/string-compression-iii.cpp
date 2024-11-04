class Solution {
public:
    string compressedString(string s) {
        int count=1;
        string ans="";
        char prev=s[0];
        int n=s.size();
        

        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1] or count==9){
            
                ans+=to_string(count);
                 ans+=prev;
                count=1;
                prev=s[i];

            }
        
            else{
                count++;
            }

        }
           ans+=to_string(count);
           ans+=prev;
        return ans;
        
    }
};