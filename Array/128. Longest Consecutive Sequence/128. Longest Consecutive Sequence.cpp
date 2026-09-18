// Problem: 128. Longest Consecutive Sequence
// Runtime: 19 ms (Beats 84.45%)
// Memory: 60 MB (Beats 98.28%)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() ==0) return 0;

        sort(nums.begin(),nums.end());

        int longest=1;
        int current=1;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] == nums[i-1] + 1)
            {
                current++;
            }
            else if(nums[i] == nums[i-1])
            {
                continue;
            }
            else
            {
                current = 1;
            }
            longest=max(longest,current);
        }

        return longest;
    }
};