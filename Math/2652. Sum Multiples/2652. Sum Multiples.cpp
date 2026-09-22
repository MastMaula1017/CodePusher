// Problem: 2652. Sum Multiples
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.6 MB (Beats 10.33%)

class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;

        for(int i=0;i<=n;i++)
        {
            if(i%3==0|| i%5==0 || i%7==0)
            {
                sum+=i;
            }
        }
        return sum;
    }
};