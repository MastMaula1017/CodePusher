// Problem: 392. Is Subsequence
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.6 MB (Beats 66.82%)

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        
        for (int j = 0; j < t.size(); j++) {
            if (i < s.size() && s[i] == t[j]) {
                i++;
            }
        }
        
        return i == s.size();
    }
};

