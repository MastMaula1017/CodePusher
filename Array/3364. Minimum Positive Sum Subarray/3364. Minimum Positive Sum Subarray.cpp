// Problem: 3364. Minimum Positive Sum Subarray 
// Runtime: 2 ms (Beats 46.41%)
// Memory: 29.5 MB (Beats 63.40%)

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        
        int n = nums.size();
        int res = INT_MAX;
        for(int i=0;i<n;i++)
        {
            int sum=0;

            for(int j=i;j<n && (j-i+1 <=r );j++)
            {
                sum = sum+nums[j];
                if(j-i+1 >= l && sum>0)
                {
                    res=min(res,sum);
                }
            }
        }
         return res == INT_MAX ? -1 : res;
    }
};