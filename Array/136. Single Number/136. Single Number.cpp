// Problem: 136. Single Number
// Runtime: 14 ms (Beats 9.45%)
// Memory: 23.8 MB (Beats 9.45%)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> st;

        for(int i=0;i<nums.size();i++){
            if(st.count(nums[i])) st.erase(nums[i]);
            else st.insert(nums[i]);
        }
        return *st.begin();
    }
};