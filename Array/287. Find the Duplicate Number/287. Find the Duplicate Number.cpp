// Problem: 287. Find the Duplicate Number
// Runtime: 123 ms (Beats 5.26%)
// Memory: 104.7 MB (Beats 6.53%)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i: nums)
        {
            mp[i]++;
        }

        for(auto i : mp)
        {
            if(i.second > 1)
            {
                return i.first;
            }
        }
        return -1;
    }
};