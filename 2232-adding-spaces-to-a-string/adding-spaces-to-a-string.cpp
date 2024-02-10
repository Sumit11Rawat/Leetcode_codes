class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int i=0;
        int j=0;
        while(j<s.size()&&i<spaces.size()){
            if(j==spaces[i]){
              ans+=" ";
            //   j++;
              i++;
            }
            else{
                ans+=s[j];
                j++;
            }

        }
        while(j<s.size()){
            ans+=s[j];
            j++;
        }
        return ans;
    }
};