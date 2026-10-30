// Problem: 189. Rotate Array
// Runtime: 1 ms (Beats 78.18%)
// Memory: 263.4 MB (Beats 36.25%)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};