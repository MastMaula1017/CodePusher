// Problem: 3019. Number of Changing Keys
// Runtime: 2 ms (Beats 11.14%)
// Memory: 9.1 MB (Beats 52.19%)

class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;

        for (int i = 1; i < s.length(); i++) {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                count++;
            }
        }

        return count;
    }
};