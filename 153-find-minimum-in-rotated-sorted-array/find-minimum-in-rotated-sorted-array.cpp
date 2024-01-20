class Solution {
public:
    int findMin(vector<int>& array) {
       int left = 0;
    int right = array.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (array[mid] > array[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return array[left];
    }
};