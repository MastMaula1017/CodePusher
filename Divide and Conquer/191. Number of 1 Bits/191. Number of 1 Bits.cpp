// Problem: 191. Number of 1 Bits
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.4 MB (Beats 10.99%)

class Solution {
public:
    int hammingWeight(int n) {
        unsigned int num = n;
        int count = 0;

        while (num != 0) {
            count += (num & 1);
            num >>= 1;
        }

        return count;
    }
};