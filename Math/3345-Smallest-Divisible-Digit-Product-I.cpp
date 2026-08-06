class Solution {
public:
    int smallestNumber(int n, int t) {

        while (true) {
            int org = n;
            vector<int> ans;

            // Store digits
            while (org) {
                int x = org % 10;
                ans.push_back(x);
                org /= 10;
            }

            int p = 1;

            for (int i = 0; i < ans.size(); i++) {
                p *= ans[i];
            }

            if (p % t == 0)
                return n;

            n++;
        }
    }
};