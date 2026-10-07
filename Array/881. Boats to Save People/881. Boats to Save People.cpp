// Problem: 881. Boats to Save People
// Runtime: 18 ms (Beats 53.86%)
// Memory: 45.9 MB (Beats 5.27%)

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();

        sort(begin(people),end(people));

        int i=0,j=n-1;
        int boats=0;

        while(i<=j)
        {
            if(people[j] + people[i] <= limit)
            {
                i++;
                j--;
                boats++;
            }
            else
            {
                j--;
                boats++;
            }
        }
        return boats;
    }
};