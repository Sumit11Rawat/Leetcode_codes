class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ans= ((ax2)-(ax1))*((ay2)-(ay1))+((bx2)-(bx1))*((by2)-(by1));
        cout<<ans;
        if(bx2-ax2>=bx2-bx1||ax2-bx2>=ax2-ax1||ay2-by2>=ay2-ay1||by2-ay2>=by2-by1){
            //  cout<<"hello";
            return ans;
        }
        if(ax1<=bx1&&bx2<=ax2&&ay1<=by1&&ay2>=by2){
           
            return (ax2-ax1)*(ay2-ay1);
        }
        if(ax1>=bx1&&bx2>=ax2&&ay1>=by1&&ay2<=by2){
            return (bx2-bx1)*(by2-by1);
        }
    //    int temp=(((ax2)-(bx1)))*(((by2)-(ay1)));
    // if(by2>ay2){
    //   return ans- ((ax2-bx1)*(ay2-by1));
    // }
    //    return ans-((ax2-bx1)*(by2-ay1));
    // // }
    return ans-(min(ax2,bx2)-max(ax1,bx1))*(min(by2,ay2)-max(ay1,by1));
    }
};