class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size()){
            return -1;
        }
        int fans=-1;
        for(int i=0;i<=haystack.size()-needle.size();i++){
            int k=needle.size();
            string ans="";
            int j=i;
            while(k>0){
                ans+=haystack[j];
                k--;
                j++;
            }
            if(ans==needle){
                fans=i;
                break;
            }
        }
        return fans;
    }
};