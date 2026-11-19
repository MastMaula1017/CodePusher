// Problem: 53. Maximum Subarray
// Runtime: 1 ms (Beats 35.10%)
// Memory: 71.6 MB (Beats 88.82%)

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