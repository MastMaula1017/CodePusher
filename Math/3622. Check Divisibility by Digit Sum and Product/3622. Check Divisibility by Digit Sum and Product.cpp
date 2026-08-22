// Problem: 3622. Check Divisibility by Digit Sum and Product
// Runtime: 0 ms (Beats 100.00%)
// Memory: 7.7 MB (Beats 68.55%)

class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int digitSum = 0;
        int digitProduct = 1;

        while (x > 0) {
            int digit = x % 10;
            digitSum += digit;
            digitProduct *= digit;
            x /= 10;
        }

        return n % (digitSum + digitProduct) == 0;
    }
};