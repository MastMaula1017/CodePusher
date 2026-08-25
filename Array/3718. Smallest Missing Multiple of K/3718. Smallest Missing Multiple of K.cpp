// Problem: 3718. Smallest Missing Multiple of K
// Runtime: 7 ms (Beats 9.55%)
// Memory: 25.1 MB (Beats 45.06%)

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());

        int multiple = k;
        while (st.count(multiple)) {
            multiple += k;
        }

        return multiple;
    }
};