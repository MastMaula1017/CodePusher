// Problem: 283. Move Zeroes
// Runtime: 0 ms (Beats 100.00%)
// Memory: 23.8 MB (Beats 51.51%)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size();

        int i=0;

        for(int j=0;j<n;j++)
        {
            if(nums[j] != 0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};