class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        // Initialize arrays for left and right products, and the final result.
        vector<int> left(n, 1); 
        vector<int> right(n, 1); 
        vector<int> ans(n, 1);
        
        // Calculate the product of elements to the left of each element.
        int left_product = 1;
        for (int i = 0; i < n; i++) {
            left[i] = left_product;
            left_product *= nums[i];
        }
        
        // Calculate the product of elements to the right of each element.
        int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            right[i] = right_product;
            right_product *= nums[i];
        }
        
        // Calculate the final result by multiplying corresponding left and right products.
        for (int i = 0; i < n; i++) {
            ans[i] = left[i] * right[i];
        }
        
        return ans;
    }
};
