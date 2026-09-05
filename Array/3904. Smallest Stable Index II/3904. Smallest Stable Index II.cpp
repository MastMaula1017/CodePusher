// Problem: 3904. Smallest Stable Index II
// Runtime: 11 ms (Beats 57.63%)
// Memory: 202.7 MB (Beats 76.32%)

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> minIdx(n);
        int minElem = INT_MAX;

        for(int i = n-1; i>=0; i--)
        {
            minElem = min(minElem, nums[i]);
            minIdx[i] = minElem;
        }

        int maxElem = INT_MIN;

        for(int i = 0; i<n; i++)
        {
            maxElem = max(maxElem, nums[i]);
           
           if(maxElem - minIdx[i] <= k)
           {
            return i;
           }
        }
        return -1;
    }
};