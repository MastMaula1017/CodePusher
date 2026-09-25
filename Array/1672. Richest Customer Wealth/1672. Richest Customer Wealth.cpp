// Problem: 1672. Richest Customer Wealth
// Runtime: 0 ms (Beats 100.00%)
// Memory: 11.2 MB (Beats 82.05%)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (int i = 0; i < accounts.size(); i++) {
            int wealth = 0;

            for (int j = 0; j < accounts[i].size(); j++) {
                wealth += accounts[i][j];
            }

            maxWealth = max(maxWealth, wealth);
        }

        return maxWealth;
    }
};