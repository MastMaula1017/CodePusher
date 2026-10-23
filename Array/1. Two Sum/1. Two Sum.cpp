// Problem: 1. Two Sum
// Runtime: 1 ms (Beats 79.48%)
// Memory: 14.8 MB (Beats 44.55%)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            int need = target - nums[i] ;

            if(mp.find(need) != mp.end())
            {
                return {mp[need],i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};