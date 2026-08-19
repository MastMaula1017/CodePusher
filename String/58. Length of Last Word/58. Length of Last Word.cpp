// Problem: 58. Length of Last Word
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.8 MB (Beats 92.84%)

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count the last word
        int ans = 0;
        while (i >= 0 && s[i] != ' ') {
            ans++;
            i--;
        }

        return ans;
    }
};