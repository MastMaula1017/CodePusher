// Problem: 3702. Longest Subsequence With Non-Zero Bitwise XOR
// Runtime: 3 ms (Beats 43.09%)
// Memory: 171.2 MB (Beats 88.49%)

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xr = 0;
        bool hasNonZero = false;

        for (int x : nums) {
            xr ^= x;
            if (x != 0)
                hasNonZero = true;
        }

        // XOR of entire array is non-zero
        if (xr != 0)
            return n;

        // Entire XOR is zero, remove one non-zero element
        if (hasNonZero)
            return n - 1;

        // All elements are zero
        return 0;
    }
};