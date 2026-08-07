// Problem: 35. Search Insert Position
// Runtime: 0 ms (Beats 100%)
// Memory: 13.6 MB (Beats 78.78959999999996%)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }
};