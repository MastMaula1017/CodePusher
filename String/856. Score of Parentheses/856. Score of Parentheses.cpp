// Problem: 856. Score of Parentheses
// Runtime: 2 ms (Beats 4.92%)
// Memory: 8.3 MB (Beats 21.13%)

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for (char c : s) {

            if (c == '(') {
                st.push(0);
            }
            else {
                int x = st.top();
                st.pop();

                int score;

                if (x == 0)
                    score = 1;          // ()
                else
                    score = 2 * x;      // (A)

                st.top() += score;
            }
        }

        return st.top();
    }
};