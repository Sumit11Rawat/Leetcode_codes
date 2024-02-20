class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        if(g.size()==0||s.size()==0){
            return 0;
        }
        // if(g[0]>s[0]){
        //     return 0;
        // }
        int i=0;
        int j=0;
        int count=0;
        int chk=0;
        while(i<g.size()&&j<s.size()){
            chk=0;
         if(s[j]>=g[i]){
             count++;
             j++;

            //  i++;
        chk=1;
         }
         else{
             j++;
         }
         if(chk==1){
             i++;
         }
            
        }
        return count;
    }
};