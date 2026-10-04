// Problem: 678. Valid Parenthesis String
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.4 MB (Beats 17.36%)

class Solution {
public:
    bool checkValidString(string s) {

        stack<int> open;
        stack<int> star;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                open.push(i);
            }

            else if (s[i] == '*') {
                star.push(i);
            }

            else { // ')'

                if (!open.empty()) {
                    open.pop();
                }
                else if (!star.empty()) {
                    star.pop();
                }
                else {
                    return false;
                }
            }
        }

        while (!open.empty() && !star.empty()) {

            if (open.top() > star.top()) {
                return false;
            }

            open.pop();
            star.pop();
        }

        return open.empty();
    }
};