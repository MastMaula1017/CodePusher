// Problem: 1550. Three Consecutive Odds
// Runtime: 0 ms (Beats 100.00%)
// Memory: 12 MB (Beats 23.96%)

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;

        for (int x : arr) {
            if (x % 2 != 0) {
                count++;
                if (count == 3)
                    return true;
            } else {
                count = 0;
            }
        }

        return false;
    }
};