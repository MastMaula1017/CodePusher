// Problem: 921. Minimum Add to Make Parentheses Valid
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.5 MB (Beats 56.27%)

class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int ans = 0;

        for (char ch : s) {
            if (ch == '(') {
                open++;
            }
            else {
                if (open > 0) {
                    open--;
                }
                else {
                    ans++;
                }
            }
        }

        return ans + open;
    }
};