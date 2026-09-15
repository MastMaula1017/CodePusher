// Problem: 709. To Lower Case
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.2 MB (Beats 53.64%)

class Solution {
public:
    string toLowerCase(string s) {
        for (char &c : s) {
            c = tolower(c);
        }
        return s;

    }
};