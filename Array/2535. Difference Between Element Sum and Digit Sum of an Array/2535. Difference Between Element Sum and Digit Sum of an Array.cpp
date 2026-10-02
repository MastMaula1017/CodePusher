// Problem: 2535. Difference Between Element Sum and Digit Sum of an Array
// Runtime: 0 ms (Beats 100.00%)
// Memory: 19.3 MB (Beats 85.24%)

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int elementSum = 0;
        int digitSum = 0;

        for (int num : nums) {

            // Element sum
            elementSum += num;

            // Digit sum
            int x = num;

            while (x > 0) {
                digitSum += x % 10;
                x = x / 10;
            }
        }

        return elementSum - digitSum;
    }
};