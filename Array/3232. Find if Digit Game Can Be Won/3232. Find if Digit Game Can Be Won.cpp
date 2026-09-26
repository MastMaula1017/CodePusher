// Problem: 3232. Find if Digit Game Can Be Won
// Runtime: 0 ms (Beats 100.00%)
// Memory: 28.6 MB (Beats 48.51%)

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum = 0;
        int doubleSum = 0;

        for (int num : nums) {
            if (num < 10) {
                singleSum += num;
            } else {
                doubleSum += num;
            }
        }

        return singleSum > doubleSum || doubleSum > singleSum;
    }
};