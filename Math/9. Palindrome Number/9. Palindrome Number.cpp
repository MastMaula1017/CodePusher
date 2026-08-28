// Problem: 9. Palindrome Number
// Runtime: 7 ms (Beats 13.05%)
// Memory: 8.5 MB (Beats 64.67%)

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long long reversed = 0;

        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return original == reversed;
    }
};