// Problem: 560. Subarray Sum Equals K
// Runtime: 2565 ms (Beats 7.07%)
// Memory: 34.2 MB (Beats 96.96%)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n; i++) {

            int sum = 0;

            for(int j = i; j < n; j++) {

                sum += nums[j];

                if(sum == k) {
                    count++;
                }
            }
        }

        return count;
    }
};