/*
    Problem: Container With Most Water
    Link:    https://leetcode.com/problems/container-with-most-water/

    Approach: Optimal (two pointers — always move the shorter side)

    Idea:
    Start with the widest container (L = 0, R = n-1). Any container that keeps the SHORTER line
    and moves the other pointer inward is narrower and still limited by that short line, so it can
    never be better — that short line is finished. Move it inward and repeat.

    Steps (example height=[1, 8, 6, 2, 5, 4, 8, 3, 7]):
    1. L = 0, R = 8: area = min(1, 7) * 8 = 8;  height[L] shorter → L++
    2. L = 1, R = 8: area = min(8, 7) * 7 = 49; height[R] shorter → R--
    3. … continue until L meets R; best stays 49

    Time Complexity:  O(n) — each step moves one pointer inward
    Space Complexity: O(1) — two indices and the best area

    Edge Cases:
    - n = 2                         → one step: the only container
    - equal heights at L and R      → moving either one is safe (both are limited by the same height)
    - zero-height lines at the ends → skipped immediately (area 0)

    Example: height = [1, 8, 6, 2, 5, 4, 8, 3, 7] → 49

    Note: The proof in one line: when height[L] < height[R], every pair (L, j) with j < R has
          area ≤ height[L] * (j - L) < height[L] * (R - L), so discarding L loses nothing.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int L = 0, R = (int)height.size() - 1;
        int best = 0;
        while (L < R) {
            int area = min(height[L], height[R]) * (R - L);
            best = max(best, area);
            if (height[L] < height[R]) {
                L++;
            } else {
                R--;
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
