// Problem: 3870. Count Commas in Range
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.5 MB (Beats 51.38%)

class Solution {
public:
    int countCommas(int n) {
        return max(0, n - 999);
    }
};