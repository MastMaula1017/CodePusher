// Problem: 179. Largest Number
// Runtime: 5 ms (Beats 33.13%)
// Memory: 17.1 MB (Beats 56.48%)

class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> v;

        // int -> string
        for (int num : nums) {
            v.push_back(to_string(num));
        }

        // Custom comparator
        sort(v.begin(), v.end(), [](string a, string b) {
            return a + b > b + a;
        });

        // Important edge case
        if (v[0] == "0") {
            return "0";
        }

        string ans = "";

        for (string s : v) {
            ans += s;
        }

        return ans;
    }
};