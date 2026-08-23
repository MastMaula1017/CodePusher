// Problem: 1927. Sum Game
// Runtime: 7 ms (Beats 21.45%)
// Memory: 13.9 MB (Beats 92.07%)

class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int diff = 0;
        int qLeft = 0, qRight = 0;

        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                qLeft++;
            else
                diff += num[i] - '0';
        }

        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                qRight++;
            else
                diff -= num[i] - '0';
        }

        int qDiff = qRight - qLeft;

        return diff * 2 != 9 * qDiff;
    }
};