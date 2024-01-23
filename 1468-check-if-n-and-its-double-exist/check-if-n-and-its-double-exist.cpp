class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            int j=0;
            while(j<arr.size()){
                if(arr[i]==arr[j]*2&&j!=i){
                    return true;
                }
                j++;
            }
        }
        return false;
    }
};