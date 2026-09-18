// Problem: 1903. Largest Odd Number in String
// Runtime: 3 ms (Beats 31.43%)
// Memory: 17.9 MB (Beats 37.90%)

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--)
        {
            int digit = num[i] - '0';

            if(digit%2==1)
            {
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};