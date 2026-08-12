// Problem: 2958. Length of Longest Subarray With at Most K Frequency
// Runtime: 59 ms (Beats 78.88%)
// Memory: 149.3 MB (Beats 56.74%)

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < nums.size(); right++) {
            
            freq[nums[right]]++;

            while (freq[nums[right]] > k) {
                freq[nums[left]]--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};