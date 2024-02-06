class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if(nums1.size()==0){
        //     return nums2;
        // }
        // if(nums2.size()==0){
        //     return nums1;
        // }
        for(int i=n+m-1;i>=m;i--){
            nums1.erase(nums1.begin()+i);
        }
        int i=0;
        int j=0;
        while(i<m+n&&j<n){
            if(nums1[i]>nums2[j]){
               nums1.insert(nums1.begin()+i,nums2[j]);
               j++;
              i++;

            }
             else{
                // if(nums1[i]==0){
                    
                //     nums1.erase(nums1.begin()+i);
                //     nums1.insert(nums1.begin()+i,nums2[j]);
                //     i--;
                //     j++;
                // }
               
                
                i++;
            }
        }
        // while(i<m){
        //     nums1.push_back(nums1[i]);
        //     i++;
        // }
        while(j<n){
            nums1.push_back(nums2[j]);
            j++;
        }
    }
};