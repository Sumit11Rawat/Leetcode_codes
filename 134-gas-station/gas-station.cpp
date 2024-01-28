class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // first chk total gas and cost;
        int Gas=0;
        int Cost=0;

        for(int i=0;i<gas.size();i++){
            Gas+=gas[i];
            Cost+=cost[i];
        }
        if(Cost>Gas){
            return -1;
        }
        long ans=0;
       int total=0;
       for(int i=0;i<gas.size();i++){
           total+=-(cost[i]-gas[i]);
           if(total<0){
               total=0;
               ans=i+1;

           }

           
           
           
       }
        return ans;
    }
};