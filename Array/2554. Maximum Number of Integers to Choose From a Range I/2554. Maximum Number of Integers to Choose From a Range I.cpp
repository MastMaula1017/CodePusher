// Problem: 2554. Maximum Number of Integers to Choose From a Range I
// Runtime: 191 ms (Beats 35.57%)
// Memory: 177.9 MB (Beats 34.51%)

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        unordered_set<int> st (begin(banned),end(banned));
        int c=0;
        int s=0;

        for(int num=1;num<=n;num++)
        {
            if(st.count(num))
            {
                continue;
            }
            if(s+num <= maxSum)
            {
                c++;
                s = s+num;
            }
            else
            {
                break;
            }
        }
        return c;
    }
};