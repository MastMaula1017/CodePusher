// Problem: 2913. Subarrays Distinct Element Sum of Squares I
// Runtime: 40 ms (Beats 19.90%)
// Memory: 36.3 MB (Beats 58.72%)

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            unordered_set<int> st;

            for (int j = i; j < n; j++) {
                st.insert(nums[j]);

                long long distinct = st.size();
                ans += distinct * distinct;
            }
        }

        return ans;
    }
};