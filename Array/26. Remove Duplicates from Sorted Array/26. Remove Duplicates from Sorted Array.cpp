// Problem: 26. Remove Duplicates from Sorted Array
// Runtime: 3 ms (Beats 11.60%)
// Memory: 22.5 MB (Beats 80.69%)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int k=1;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};