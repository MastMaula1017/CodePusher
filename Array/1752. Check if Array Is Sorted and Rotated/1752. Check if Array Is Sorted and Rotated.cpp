// Problem: 1752. Check if Array Is Sorted and Rotated
// Runtime: 0 ms (Beats 100.00%)
// Memory: 11.3 MB (Beats 21.56%)

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int c=0;

        for(int i=0;i<n;i++)
        {   
            if(nums[i] > nums[(i+1) % n]) c++;
        }
        return c <= 1;
    }
};