/*
    Problem: Longest Consecutive Sequence
    Link:    https://leetcode.com/problems/longest-consecutive-sequence/

    Approach: Optimized (sort + one scan)

    Idea:
    After sorting, consecutive values sit next to each other. Walk once: a value one bigger than the
    previous extends the run, an equal value is a duplicate (skip it), anything else starts a new run.

    Steps (example nums=[100, 4, 200, 1, 3, 2]):
    1. If empty → return 0
    2. Sort → [1, 2, 3, 4, 100, 200]
    3. current = best = 1
    4. For i = 1 … n-1:
       - nums[i] == nums[i-1]     → duplicate, skip
       - nums[i] == nums[i-1] + 1 → current++
       - otherwise                → current = 1
       best = max(best, current)
    5. Run 1, 2, 3, 4 gives best = 4

    Time Complexity:  O(n log n) — sorting dominates; the scan is O(n)
    Space Complexity: O(log n)   — typical sort recursion stack (may be O(n) depending on impl)

    Edge Cases:
    - empty array        → 0
    - single element     → 1
    - duplicates ([0, 0, 1]) → equal neighbours are skipped → 2

    Example: nums = [100, 4, 200, 1, 3, 2] → 4

    Note: sort mutates the input (fine for LeetCode). nums[i-1] + 1 cannot overflow (|value| ≤ 10⁹).
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        sort(nums.begin(), nums.end());

        int best = 1, current = 1;
        int n = (int)nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                continue;  // duplicate: neither extends nor breaks the run
            }
            if (nums[i] == nums[i - 1] + 1) {
                current++;
            } else {
                current = 1;
            }
            best = max(best, current);
        }
        return best;
    }
};

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    Solution solution;
    cout << solution.longestConsecutive(nums) << endl;
    return 0;
}
