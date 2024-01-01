class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
    
  int carry=1;
  int n=arr.size();
  for(int i=n-1;i>=0;i--){
int sum=carry+arr[i];
carry=sum/10;
arr[i]=sum%10;
  }
  if(carry!=0){
      arr.insert(arr.begin(),carry);
  }
  return arr;
  
    }
};
