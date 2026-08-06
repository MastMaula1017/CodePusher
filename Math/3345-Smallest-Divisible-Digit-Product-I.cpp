class Solution {
public:
    int smallestNumber(int n, int t) {

        while (true) {
            int orginal = n;
            vector<int> ans;

            // Store digits
            while (orginal) {
                int x = orginal % 10;
                ans.push_back(x);
                orginal /= 10;
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