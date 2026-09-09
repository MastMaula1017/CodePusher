// Problem: 575. Distribute Candies
// Runtime: 109 ms (Beats 51.33%)
// Memory: 120.1 MB (Beats 60.76%)

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> types(candyType.begin(), candyType.end());

        return min((int)types.size(), (int)candyType.size() / 2);
    }
};