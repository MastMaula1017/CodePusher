// Problem: 3727. Maximum Alternating Sum of Squares
// Runtime: 59 ms (Beats 59.13%)
// Memory: 212 MB (Beats 5.57%)

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> squares;

        for (int num : nums) {
            squares.push_back(1LL * num * num);
        }

        sort(squares.begin(), squares.end());

        int n = squares.size();
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (i < (n + 1) / 2) {
                ans += squares[n - 1 - i];
            } else {
                ans -= squares[n - 1 - i];
            }
        }

        return ans;
    }
};