// Problem: 3723. Maximize Sum of Squares of Digits
// Runtime: 669 ms (Beats 7.11%)
// Memory: 63.3 MB (Beats 33.00%)

class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) {
            return "";
        }

        string ans = "";

        for (int i = 0; i < num; i++) {
            int digit = min(9, sum);

            ans += to_string(digit);

            sum -= digit;
        }

        return ans;
    }
};