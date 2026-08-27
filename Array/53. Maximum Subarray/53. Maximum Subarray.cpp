// Problem: 53. Maximum Subarray
// Runtime: 0 ms (Beats 100.00%)
// Memory: 71.8 MB (Beats 52.77%)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};