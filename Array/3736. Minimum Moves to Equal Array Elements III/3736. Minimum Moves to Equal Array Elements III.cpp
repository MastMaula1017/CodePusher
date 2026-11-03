// Problem: 3736. Minimum Moves to Equal Array Elements III
// Runtime: 0 ms (Beats 100.00%)
// Memory: 31.5 MB (Beats 79.45%)

class Solution {
public:
    int minMoves(vector<int>& nums) {
         int largest = *max_element(nums.begin(), nums.end());
         int totalMoves = 0;

         for(int i = 0; i < nums.size(); i++)
         {
            totalMoves = totalMoves + largest - nums[i];
         }

         return totalMoves;
    }
};