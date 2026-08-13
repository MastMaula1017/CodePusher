// Problem: 49. Group Anagrams
// Runtime: 27 ms (Beats 22.30%)
// Memory: 26.3 MB (Beats 26.33%)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string, vector<string>> mp;

        for (string s : strs) {

            string temp = s;

            sort(temp.begin(), temp.end());

            mp[temp].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};