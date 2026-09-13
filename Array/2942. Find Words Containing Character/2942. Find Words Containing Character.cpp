// Problem: 2942. Find Words Containing Character
// Runtime: 0 ms (Beats 100.00%)
// Memory: 33.1 MB (Beats 57.29%)

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != string::npos) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};