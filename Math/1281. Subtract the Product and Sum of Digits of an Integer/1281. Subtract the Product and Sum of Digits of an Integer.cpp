// Problem: 1281. Subtract the Product and Sum of Digits of an Integer
// Runtime: 0 ms (Beats 100.00%)
// Memory: 7.8 MB (Beats 89.83%)

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int product = 1;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;

            product = product * digit;
            sum = sum + digit;

            n = n / 10;
        }

        return product - sum;
    }
};