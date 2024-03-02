class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0;
        }
        if(prices.size()==2){
            if(prices[0]<prices[1]){
                return prices[1]-prices[0];

            }
            else{
                return 0;
            }
        }
        int mini=INT_MAX;
        int ans=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
         if(prices[i]>mini){
                ans=max(ans,prices[i]-mini);
            
        }
        }
        cout<<ans<<endl;;
        int chk=0;
        int temp=0;
        int i=0;
        int rem=0;
        while(i<prices.size()-1){
            // if(i==prices.size()-1){
                     
            //     }
            if(prices[i]>prices[i+1]){
                i++;
                rem=prices[i];
            }
            else{
                chk=prices[i];
                // if(i==prices.size()-1){
                //     return max(ans,temp+prices[i]-rem);
                // }
                if(prices[i+1]>chk){
                    temp+=prices[i+1]-chk;
                     i++;
                     chk=0;
                }
                else{
                     i++;
                }
                
            }
        }
        cout<<temp;
        return max(temp,ans);
    }
};