// Problem: 136. Single Number
// Runtime: 0 ms (Beats 100.00%)
// Memory: 20.7 MB (Beats 54.97%)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans ^= nums[i];
        }
        return ans;
    }
};