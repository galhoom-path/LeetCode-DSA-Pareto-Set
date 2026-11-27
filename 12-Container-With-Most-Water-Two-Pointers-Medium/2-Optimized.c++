/*
    Problem: Container With Most Water
    Link:    https://leetcode.com/problems/container-with-most-water/

    Approach: Optimized (each line as the shorter side + binary search for its farthest partner)

    Idea:
    In the best container, one line i is the shorter (limiting) side, so area = height[i] * width.
    For that i, the best partner is the FARTHEST line with height ≥ height[i] — on the left or on
    the right. Prefix maxima are non-decreasing and suffix maxima are non-increasing, so both
    farthest partners can be found by binary search.

    Steps (example height=[1, 8, 6, 2, 5, 4, 8, 3, 7]):
    1. prefMax[k] = max(height[0…k])   → [1, 8, 8, 8, 8, 8, 8, 8, 8]
       sufMax[k]  = max(height[k…n-1]) → [8, 8, 8, 8, 8, 8, 8, 7, 7]
    2. For each i:
       - L = first index with prefMax[L] ≥ height[i] (lower_bound) → area height[i] * (i - L)
       - R = last index with sufMax[R] ≥ height[i] (binary search)  → area height[i] * (R - i)
    3. i = 8 (height 7): L = 1 → 7 * 7 = 49 → best = 49

    Time Complexity:  O(n log n) — two O(log n) searches per line
    Space Complexity: O(n)       — the prefix and suffix maximum arrays

    Edge Cases:
    - zero-height line → area 0 (it never beats a real container)
    - n = 2            → each line finds the other as its partner
    - i itself         → L ≤ i and R ≥ i always (prefMax[i], sufMax[i] ≥ height[i]), so widths are ≥ 0

    Example: height = [1, 8, 6, 2, 5, 4, 8, 3, 7] → 49

    Note: Why it is correct: the optimum pair has a shorter line i; its partner has height ≥ height[i],
          so the optimum ≤ height[i] * (distance to the farthest such line) — which this computes.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = (int)height.size();
        vector<int> prefMax(n), sufMax(n);
        prefMax[0] = height[0];
        for (int k = 1; k < n; k++) {
            prefMax[k] = max(prefMax[k - 1], height[k]);
        }
        sufMax[n - 1] = height[n - 1];
        for (int k = n - 2; k >= 0; k--) {
            sufMax[k] = max(sufMax[k + 1], height[k]);
        }

        int best = 0;
        for (int i = 0; i < n; i++) {
            // farthest partner on the left: first index whose prefix max reaches height[i]
            int L = (int)(lower_bound(prefMax.begin(), prefMax.end(), height[i]) - prefMax.begin());
            best = max(best, height[i] * (i - L));

            // farthest partner on the right: last index whose suffix max still reaches height[i]
            int lo = i, hi = n - 1;
            while (lo < hi) {
                int mid = lo + (hi - lo + 1) / 2;
                if (sufMax[mid] >= height[i]) {
                    lo = mid;
                } else {
                    hi = mid - 1;
                }
            }
            best = max(best, height[i] * (lo - i));
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
