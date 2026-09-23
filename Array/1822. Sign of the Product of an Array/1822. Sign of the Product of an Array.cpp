// Problem: 1822. Sign of the Product of an Array
// Runtime: 0 ms (Beats 100.00%)
// Memory: 13.6 MB (Beats 78.87%)

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negativeCount = 0;

        for (int num : nums) {
            if (num == 0)
                return 0;

            if (num < 0)
                negativeCount++;
        }

        if (negativeCount % 2 == 0)
            return 1;
        else
            return -1;
    }
};