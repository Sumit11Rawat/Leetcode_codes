class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int l = 1;
        int h = nums.size() - 2;
        int m = 0;

        while (l <= h) {
            m = l + (h - l) / 2;
            // if (nums[l] == nums[h]) {
            //     l += 1;
            //     h -= 1;
            // }
            if (nums[m - 1] < nums[m] && nums[m] > nums[m + 1]) {
                return m;
            } else if (nums[m] > nums[m + 1]) {
                h = m - 1;
            } else {
                l = m + 1;
            }
        }

        return m;
    }
};