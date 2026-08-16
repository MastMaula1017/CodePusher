// Problem: 324. Wiggle Sort II
// Runtime: 3 ms (Beats 46.92%)
// Memory: 22 MB (Beats 47.61%)

class Solution {
public:
    void wiggleSort(vector<int>& nums) {

        int n = nums.size();

        vector<int> temp = nums;
        sort(temp.begin(), temp.end());

        int small = (n + 1) / 2 - 1;
        int large = n - 1;

        for (int i = 0; i < n; i += 2) {
            nums[i] = temp[small];
            small--;
        }

        for (int i = 1; i < n; i += 2) {
            nums[i] = temp[large];
            large--;
        }
    }
};