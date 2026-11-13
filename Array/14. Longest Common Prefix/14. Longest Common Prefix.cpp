// Problem: 14. Longest Common Prefix
// Runtime: 0 ms (Beats 100.00%)
// Memory: 11.9 MB (Beats 53.83%)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};

