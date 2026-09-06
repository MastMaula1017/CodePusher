// Problem: 451. Sort Characters By Frequency
// Runtime: 0 ms (Beats 100.00%)
// Memory: 11.3 MB (Beats 44.61%)

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        vector<pair<char,int>> v;

        for(char i : s)
        {
            mp[i]++;
        }

        for(auto &it : mp)
        {
            v.push_back({it.first, it.second});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b)
        {
            return a.second > b.second;
        });

         string ans;

        for (auto &it : v)
        {
            ans.append(it.second, it.first);
        }

        return ans;

    }
};