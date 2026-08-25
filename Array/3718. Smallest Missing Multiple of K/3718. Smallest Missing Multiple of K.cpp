// Problem: 3718. Smallest Missing Multiple of K
// Runtime: 0 ms (Beats 100.00%)
// Memory: 24 MB (Beats 94.59%)

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int multiple = k;

        for (int x : nums) {
            if (x == multiple) {
                multiple += k;
            }
        }

        return multiple;
    }
};