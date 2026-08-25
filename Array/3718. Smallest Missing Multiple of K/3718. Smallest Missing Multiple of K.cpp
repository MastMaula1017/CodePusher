// Problem: 3718. Smallest Missing Multiple of K
// Runtime: 0 ms (Beats 100.00%)
// Memory: 24.1 MB (Beats 67.36%)

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