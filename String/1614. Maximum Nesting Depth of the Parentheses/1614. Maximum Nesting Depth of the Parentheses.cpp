// Problem: 1614. Maximum Nesting Depth of the Parentheses
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.4 MB (Beats 24.11%)

class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int ans = 0;

        for (char c : s) {
            if (c == '(') {
                depth++;
                ans = max(ans, depth);
            }
            else if (c == ')') {
                depth--;
            }
        }

        return ans;
    }
};