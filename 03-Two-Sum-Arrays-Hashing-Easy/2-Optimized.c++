/*
    Problem: Two Sum
    Link:    https://leetcode.com/problems/two-sum/

    Approach: Optimized (sort value-index pairs + two pointers)

    Idea:
    Sorting lets two pointers move toward each other: if the sum is too small, only moving the
    left pointer right can increase it; if too big, only moving the right pointer left can shrink it.
    We sort (value, original index) pairs so the answer can still report the original indices.

    Steps (example nums=[3, 2, 4], target=6):
    1. Build pairs (value, index)  →  [(3,0), (2,1), (4,2)]
    2. Sort by value               →  [(2,1), (3,0), (4,2)]
    3. L = 0, R = n-1
    4. sum = pairs[L].value + pairs[R].value
       - sum == target → return {pairs[L].index, pairs[R].index}
       - sum <  target → L++
       - sum >  target → R--
    5. Example: 2+4=6 → return {1, 2}

    Time Complexity:  O(n log n) — sorting dominates; the pointer walk is O(n)
    Space Complexity: O(n)       — the (value, index) copy

    Edge Cases:
    - smallest input (n = 2)  → L=0, R=1 is the answer immediately
    - duplicates ([3, 3], 6)  → both copies keep their own index
    - negative values         → order still holds after sorting

    Example: nums = [3, 2, 4], target = 6 → [1, 2]

    Note: Indices come back in sorted-value order, not necessarily ascending — LeetCode accepts any order.
          This is the Two Sum II idea (#10) applied after a sort.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = (int)nums.size();
        vector<pair<int, int>> pairs;  // (value, original index)
        pairs.reserve(n);
        for (int i = 0; i < n; i++) {
            pairs.push_back({nums[i], i});
        }
        sort(pairs.begin(), pairs.end());

        int L = 0, R = n - 1;
        while (L < R) {
            int sum = pairs[L].first + pairs[R].first;
            if (sum == target) {
                return {pairs[L].second, pairs[R].second};
            }
            if (sum < target) {
                L++;
            } else {
                R--;
            }
        }
        return {};  // unreachable: exactly one answer is guaranteed
    }
};

int main() {
    vector<int> nums = {3, 2, 4};
    int target = 6;
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
