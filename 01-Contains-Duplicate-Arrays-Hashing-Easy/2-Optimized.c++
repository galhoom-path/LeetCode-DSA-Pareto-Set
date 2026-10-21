/*
    Problem: Contains Duplicate
    Link:    https://leetcode.com/problems/contains-duplicate/

    Approach: Optimized (sort + adjacent scan)

    Idea:
    After sorting, any duplicate values sit next to each other — one linear pass finds them.

    Steps (example [1, 2, 1]):
    1. Sort nums  →  [1, 1, 2]
    2. For i from 0 to n-2
    3. If nums[i] == nums[i+1] → return true
    4. If the loop ends with no hit → return false

    Time Complexity:  O(n log n) — dominated by sort
    Space Complexity: O(log n)   — typical sort recursion stack (may be O(n) depending on impl)

    Edge Cases:
    - empty array      → false (loop never runs)
    - single element   → false
    - all equal        → true on first adjacent check

    Example: [1, 2, 1] → true

    Note: sort mutates the input vector (fine for LeetCode; mention in interviews if input must stay intact).
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = (int)nums.size();
        for (int i = 0; i + 1 < n; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> nums = {1, 2, 1};
    Solution solution;
    bool result = solution.containsDuplicate(nums);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
