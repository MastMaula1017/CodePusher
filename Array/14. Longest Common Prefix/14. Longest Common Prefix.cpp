// Problem: 14. Longest Common Prefix
// Runtime: 0 ms (Beats 100.00%)
// Memory: 12.1 MB (Beats 11.36%)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];

        string ans = "";

        for(int i = 0; i < first.length(); i++) {

            if(first[i] != last[i]) {
                break;
            }

            ans += first[i];
        }

        return ans;
    }
};