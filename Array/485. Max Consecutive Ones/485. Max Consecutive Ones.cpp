// Problem: 485. Max Consecutive Ones
// Runtime: 0 ms (Beats 100.00%)
// Memory: 50 MB (Beats 93.79%)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;
        int c=0;
        
        for(int i=0;i<n;i++)
        {

            if(nums[i] == 1)
            {
                c++;
                maxCount = max(maxCount,c);
            }
            else
            {
                c=0;
            }

        }
        return maxCount;
    }
};