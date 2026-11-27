/*
    Problem: Container With Most Water
    Link:    https://leetcode.com/problems/container-with-most-water/

    Approach: Brute Force

    Idea:
    Every pair of lines (i, j) forms a container. Its water level is the shorter line, and its
    width is the distance between them: area = min(height[i], height[j]) * (j - i). Try them all.

    Steps (example height=[1, 8, 6, 2, 5, 4, 8, 3, 7]):
    1. best = 0
    2. For every i < j: area = min(height[i], height[j]) * (j - i); best = max(best, area)
    3. Pair (1, 8): min(8, 7) * 7 = 49 → best = 49

    Time Complexity:  O(n²) — every pair is checked
    Space Complexity: O(1)  — a few variables

    Edge Cases:
    - n = 2                    → the only pair is the answer
    - a zero-height line       → any container using it holds 0
    - all equal heights        → the widest pair (0, n-1) wins

    Example: height = [1, 8, 6, 2, 5, 4, 8, 3, 7] → 49

    Note: n ≤ 10⁵ → ~5·10⁹ pairs: TLE on LeetCode; honest baseline only.
          The largest area is 10⁴ · 10⁵ = 10⁹, which fits in int.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = (int)height.size();
        int best = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int area = min(height[i], height[j]) * (j - i);
                best = max(best, area);
            }
        }
        return best;
    }
};

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution solution;
    cout << solution.maxArea(height) << endl;
    return 0;
}
