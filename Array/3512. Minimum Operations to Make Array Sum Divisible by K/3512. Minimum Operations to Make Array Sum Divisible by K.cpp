// Problem: 3512. Minimum Operations to Make Array Sum Divisible by K
// Runtime: 0 ms (Beats 100.00%)
// Memory: 45.3 MB (Beats 68.69%)

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;

        for (int x : nums) {
            sum += x;
        }

        return sum % k;
    }
};