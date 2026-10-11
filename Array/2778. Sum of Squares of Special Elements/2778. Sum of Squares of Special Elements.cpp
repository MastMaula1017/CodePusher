// Problem: 2778. Sum of Squares of Special Elements 
// Runtime: 0 ms (Beats 100.00%)
// Memory: 40.1 MB (Beats 41.92%)

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += nums[i - 1] * nums[i - 1];
        }
    }

    return sum;
    }
};