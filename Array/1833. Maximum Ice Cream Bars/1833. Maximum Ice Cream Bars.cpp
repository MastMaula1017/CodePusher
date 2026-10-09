// Problem: 1833. Maximum Ice Cream Bars
// Runtime: 32 ms (Beats 59.76%)
// Memory: 80.3 MB (Beats 83.13%)

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();

        sort(costs.begin(),costs.end());
        int c=0;

        for(int i=0;i<n;i++)
        {
            if(coins >= costs[i])
            {
                c++;
                coins=coins-costs[i];
            }
        }
        return c;
    }
};