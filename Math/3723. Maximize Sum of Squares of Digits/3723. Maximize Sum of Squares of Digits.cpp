// Problem: 3723. Maximize Sum of Squares of Digits
// Runtime: 674 ms (Beats 7.11%)
// Memory: 63.2 MB (Beats 35.53%)

class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int maxSum = 9 * num;

        if (sum > maxSum) {
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