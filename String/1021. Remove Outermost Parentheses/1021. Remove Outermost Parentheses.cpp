// Problem: 1021. Remove Outermost Parentheses
// Runtime: 0 ms (Beats 100.00%)
// Memory: 9 MB (Beats 21.38%)

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int balance = 0;

        for (char ch : s) {
            if (ch == '(') {
                // Agar balance 0 hai, ye outermost '(' hai
                if (balance > 0) {
                    ans += ch;
                }
                balance++;
            }
            else {
                balance--;

                // Agar balance 0 nahi hua, ye outermost ')' nahi hai
                if (balance > 0) {
                    ans += ch;
                }
            }
        }

        return ans;
    }
};