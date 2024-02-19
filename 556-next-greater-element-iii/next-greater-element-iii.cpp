class Solution {
public:
    int nextGreaterElement(int n) {
        if(n>INT_MAX){
            return -1;
        }
        vector<int>ans;
        int k=n;
        while(n){
            ans.push_back(n%10);
            n/=10;
        }
        cout<<ans.size();
        cout<<endl;
        reverse(ans.begin(),ans.end());
        int i=ans.size()-1;
        while(i>0){
            if(ans[i]>ans[i-1]){
                break;
            }
            else{
                i--;
            }
        }
        i--;
        if(i<0){
            return -1;
        }
        cout<<i<<endl;
           int j=ans.size()-1;
           while(j>=i){
               if(ans[j]>ans[i]){
                   break;
               }
               else{
                   j--;
               }
           }
            
           cout<<endl;
           cout<<j;
           cout<<endl;
           for(int i=0;i<ans.size();i++){
               cout<<ans[i]<<" ";
           }
           cout<<endl;
           swap(ans[i],ans[j]);
           for(int i=0;i<ans.size();i++){
               cout<<ans[i]<<" ";
           }
           reverse(ans.begin()+i+1,ans.end());
           long long num=0;
           for(int i=0;i<ans.size();i++){
               num=num*10+ans[i];
           }
           cout<<endl;
           cout<<num;
           if(num>INT_MAX){
               return -1;
           }
           if(num<=k){
               return -1;
           }
           return num;

    }
};