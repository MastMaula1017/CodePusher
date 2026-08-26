// Problem: 2149. Rearrange Array Elements by Sign
// Runtime: 4 ms (Beats 77.53%)
// Memory: 128.2 MB (Beats 95.44%)

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> positive;
        // vector<int> negative;

        // for (int x : nums) {
        //     if (x > 0)
        //         positive.push_back(x);
        //     else
        //         negative.push_back(x);
        // }

        // vector<int> ans;

        // for (int i = 0; i < positive.size(); i++) {
        //     ans.push_back(positive[i]);
        //     ans.push_back(negative[i]);
        // }

        // return ans;


            vector<int> ans(nums.size());

            int pos = 0;
            int neg = 1;

            for (int x : nums) {

                if (x > 0) {
                    ans[pos] = x;
                    pos += 2;
                } else {
                    ans[neg] = x;
                    neg += 2;
                }
            }

            return ans;
        }
    
};