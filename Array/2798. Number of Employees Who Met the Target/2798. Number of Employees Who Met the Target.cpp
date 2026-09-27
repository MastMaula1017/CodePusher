// Problem: 2798. Number of Employees Who Met the Target
// Runtime: 0 ms (Beats 100.00%)
// Memory: 24.5 MB (Beats 83.90%)

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;

        for (int h : hours) {
            if (h >= target) {
                count++;
            }
        }

        return count;
    }
};