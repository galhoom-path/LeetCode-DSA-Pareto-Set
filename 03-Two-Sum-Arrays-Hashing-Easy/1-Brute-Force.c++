/*
    Problem: Two Sum
    Link:    https://leetcode.com/problems/two-sum/

    Approach: Brute Force

    Idea:
    Try every pair (i, j) with i < j. The first pair whose values add up to target is the answer.

    Steps (example nums=[2, 7, 11, 15], target=9):
    1. For each index i from 0 to n-1
    2. For each index j from i+1 to n-1
    3. If nums[i] + nums[j] == target → return {i, j}
    4. (The problem guarantees exactly one answer, so the loops always return.)

    Time Complexity:  O(n²) — every pair is checked once
    Space Complexity: O(1)  — only two indices

    Edge Cases:
    - smallest input (n = 2)      → the only pair is the answer
    - negative numbers / zero     → plain addition still works
    - duplicate values (e.g. [3, 3], 6) → j starts at i+1, so an element is never paired with itself

    Example: nums = [2, 7, 11, 15], target = 9 → [0, 1]

    Note: n ≤ 10⁴ means up to ~5·10⁷ pairs — passes, but it is the honest slow baseline.
          |nums[i] + nums[j]| ≤ 2·10⁹ still fits in int.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = (int)nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};  // unreachable: exactly one answer is guaranteed
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
