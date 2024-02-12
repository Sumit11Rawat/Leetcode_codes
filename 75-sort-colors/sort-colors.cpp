class Solution {
public:
    void sortColors(vector<int>& nums) {
        // brute force

    //     int zero=0;
    //     int one=0;
    //     int two=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==0){
    //             zero++;
    //         }
    //         if(nums[i]==1){
    //             one++;
    //         }
    //         if(nums[i]==2){
    //             two++;
    //         }
    //     }
    //     nums.clear();
    //    for(int i=0;i<zero;i++){
    //        nums.push_back(0);
    //    }
    //    for(int i=0;i<one;i++){
    //        nums.push_back(1);
    //    }
    //    for(int i=0;i<two;i++){
    //        nums.push_back(2);
    //    }

    // Dutch national flag algorithm -->optimised soln
    int low=0;
    int mid=0;
    int high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    }
};