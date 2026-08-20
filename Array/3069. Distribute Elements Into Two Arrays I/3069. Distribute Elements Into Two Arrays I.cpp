// Problem: 3069. Distribute Elements Into Two Arrays I
// Runtime: 4 ms (Beats 12.56%)
// Memory: 24 MB (Beats 45.52%)

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1, arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for (int i = 2; i < nums.size(); i++) {
            if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[i]);
            } else {
                arr2.push_back(nums[i]);
            }
        }

        // Concatenate arr2 after arr1
        for (int x : arr2) {
            arr1.push_back(x);
        }

        return arr1;
    }
};