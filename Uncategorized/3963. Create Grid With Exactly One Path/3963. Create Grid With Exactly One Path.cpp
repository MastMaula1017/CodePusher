// Problem: 3963. Create Grid With Exactly One Path
// Runtime: 2 ms (Beats 45.48%)
// Memory: 11 MB (Beats 74.25%)

class Solution {
public:
vector<string> createGrid(int m, int n) {
vector<string> grid(m, string(n, '#'));

    // Make the top row free
    for (int j = 0; j < n; j++) {
        grid[0][j] = '.';
    }

    // Make the rightmost column free
    for (int i = 0; i < m; i++) {
        grid[i][n - 1] = '.';
    }

    return grid;
}


};
