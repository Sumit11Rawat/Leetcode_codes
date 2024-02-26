class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        if(n==0){
            return true;
        }
        int k=arr.size();
    if(arr.size()==1){
        if(n==1){
            if(arr[0]==0){
               return true;
            }
            else{
                return false;
            }
           
        }
        else{
            if(arr[0]==1){
                return true;
            }
            else{
            return false;
            }
           
        }
    }
   if(arr.size()==2)
   {
       if(arr[0]==1&&arr[1]==0||arr[0]==0&&arr[1]==1){
         if(n==1){
             return false;
         }
         else{
             return true;
         }
       }
       if(arr[0]==0&&arr[1]==0){
         if(n==1){
          return true;
         }
         else{
             return false;
         }
       }
   }

      for(int i=0;i<arr.size()-2;i++){
          if(arr[i]==1){
              continue;
          }
          
          else{
              if(i==0){
                  if(arr[i]==0&&arr[i+1]==0){
                      arr[i]=1;
                      n--;
                  }
              }
              else{
              if(arr[i+1]==0){
                 
                  if(arr[i+2]!=1){
                       n--;
                    arr[i+1]=1;
                  }
                //   else{
                //       if(i==0){
                //           arr[i]=0;
                //           n--;
                //       }
                //   }
                  
              }
          }
          }
          if(n==0){
              return true;
          }

      }


       if(n==0){
           return true;
       }
       if(k>=3){
  if(arr[k-3]==1){
          if(arr[k-2]==0){
              if(arr[k-1]==0){
                  n--;
              }
          }
      }
       }
    // 
    // //   if(arr[k-4]==1&&arr)
    if(n==0){
           return true;
       }
       return false;
    }
};