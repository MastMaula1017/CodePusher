// Problem: 2089. Find Target Indices After Sorting Array
// Runtime: 0 ms (Beats 100.00%)
// Memory: 15.2 MB (Beats 51.63%)

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
            if(nums[i] == target)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};