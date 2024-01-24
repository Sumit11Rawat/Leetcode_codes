class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
         int low = 0, high = v.size()  - 1;
        while(low < high){
            if(v[low]+v[high]>target)
                high--;
            else if( v[low] + v[high] < target)
                low++;
            else 
               return {low+1, high+1};
        }
        return {low+1, high+1};
    }
};