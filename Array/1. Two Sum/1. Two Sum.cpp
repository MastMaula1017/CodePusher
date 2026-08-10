// Problem: 1. Two Sum
// Runtime: 0 ms (Beats 100.00%)
// Memory: 14.9 MB (Beats 23.68%)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            if (mp.find(need) != mp.end()) {
                return {mp[need], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};