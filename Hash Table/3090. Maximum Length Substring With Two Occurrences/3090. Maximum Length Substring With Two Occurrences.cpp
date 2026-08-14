// Problem: 3090. Maximum Length Substring With Two Occurrences
// Runtime: 3 ms (Beats 42.93%)
// Memory: 9.7 MB (Beats 28.94%)

class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> mp;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++) {

            // Add current character
            mp[s[right]]++;

            // If current character occurs more than 2 times
            // move left until it becomes valid
            while (mp[s[right]] > 2) {
                mp[s[left]]--;
                left++;
            }

            // Length of current valid substring
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};