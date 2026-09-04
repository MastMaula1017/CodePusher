// Problem: 3903. Smallest Stable Index I
// Runtime: 0 ms (Beats 100.00%)
// Memory: 30.1 MB (Beats 94.42%)

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();

        for (int i = 0; i < n; i++) {

            // Find maximum from index 0 to i
            int leftMax = nums[0];

            for (int j = 0; j <= i; j++) {
                leftMax = max(leftMax, nums[j]);
            }

            // Find minimum from index i to n-1
            int rightMin = nums[i];

            for (int j = i; j < n; j++) {
                rightMin = min(rightMin, nums[j]);
            }

            // Check if index i is stable
            if (leftMax - rightMin <= k) {
                return i;
            }
        }

        return -1;
    }
};