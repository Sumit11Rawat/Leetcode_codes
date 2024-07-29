class Solution {
public:
    string losingPlayer(int x, int y) {
          for(int i=0;i<x;i++){
            if(y>=4){
                y-=4;
            }
            else{
                if(i%2==1){
                 
                       return "Alice";
                }
                else{
                    return "Bob";
                }
            }
          }
          if(x%2==1){
            return "Alice";
          }
          return "Bob";
      
    }
};