// Problem: 443. String Compression
// Runtime: 0 ms (Beats 100.00%)
// Memory: 14.1 MB (Beats 16.21%)

class Solution {
public:
    int compress(vector<char>& chars) {

        string result = "";

        int i = 0;

        while (i < chars.size()) {

            char ch = chars[i];
            int count = 0;

            // Count same consecutive characters
            while (i < chars.size() && chars[i] == ch) {
                count++;
                i++;
            }

            // Add character
            result += ch;

            // Add count if > 1
            if (count > 1) {
                result += to_string(count);
            }
        }

        // Copy result back into chars
        for (int i = 0; i < result.size(); i++) {
            chars[i] = result[i];
        }

        return result.size();
    }
};