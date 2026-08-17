// Problem: 452. Minimum Number of Arrows to Burst Balloons
// Runtime: 49 ms (Beats 50.22%)
// Memory: 94 MB (Beats 56.85%)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        int arrows = 1;
        long long arrowPosition = points[0][1];

        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > arrowPosition) {
                arrows++;
                arrowPosition = points[i][1];
            }
        }

        return arrows;
    }
};