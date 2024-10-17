class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        vector<pair<int,int>>hold(s.size());
        int maxi=0;
        int ind=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]-'0'<=maxi){
                hold[i]={ind,maxi};
              
            }
            else{
                maxi=s[i]-'0';
                ind=i;
                hold[i]={ind,maxi};
      

            }
        }
        for(int i=0;i<s.size();i++){
            if(hold[i].first>=i and s[i]-'0'<hold[i].second){
                swap(s[i],s[hold[i].first]);
                break;
            }
        }
    
        long long ans=0;
        for(int i=0;i<s.size();i++){
            ans=ans*10+s[i]-'0';
            cout<<hold[i].first<<endl;

        }
        return ans;
    }
};