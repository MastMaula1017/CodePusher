// Problem: 3471. Find the Largest Almost Missing Integer
// Runtime: 12 ms (Beats 15.79%)
// Memory: 32.6 MB (Beats 19.17%)

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        unordered_map<int, int> count;

        int n = nums.size();

        // For every subarray of size k
        for (int i = 0; i <= n - k; i++) {
            unordered_set<int> seen;

            // Add each distinct value in this subarray
            for (int j = i; j < i + k; j++) {
                seen.insert(nums[j]);
            }
            // This value appears in one more subarray
            for (int x : seen) {
                count[x]++;
            }
        }

        int ans = -1;

        // Find the largest value appearing in exactly one subarray
        for (auto& [x, freq] : count) {
            if (freq == 1) {
                ans = max(ans, x);
            }
        }

        return ans;
    }
};