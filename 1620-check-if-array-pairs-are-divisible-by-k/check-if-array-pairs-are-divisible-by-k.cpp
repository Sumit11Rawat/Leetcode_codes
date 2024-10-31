class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int count=0;
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
           m[arr[i]%k]++;
            }
            else{
                m[(arr[i]%k+k)%k]++;
            }
        }
        for(auto i:m){
            cout<<i.first<<" "<<i.second<<endl;
        }
       for(int i=1;i<=k/2;i++){
        if(m[i]!=m[k-i]){
             cout<<i<<endl;
            return false;
           
        }
       }
       return m[0]%2?false:true;
        
    }
};