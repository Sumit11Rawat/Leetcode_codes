class Solution {
public:
    int maxNumberOfBalloons(string text) {
      
        int ans=0;
        string s="balloon";
        if(s.size()>text.size()){
            return 0;
        }
        unordered_map<int,int>m;
        for(int i=0;i<text.size();i++){
            m[text[i]]++;
        }
        
   
        int j=0;
        while(j<text.size()/s.size()){
            int i=0;
        while(i<s.size()){
            if(!m[s[i]]){
               break;
                
            }
            else if(m[s[i]]){
              m[s[i]]--;
            }
            i++;
            if(i==s.size()){
                ans++;
            }
        }
        j++;
    }
    return ans;

    }
};