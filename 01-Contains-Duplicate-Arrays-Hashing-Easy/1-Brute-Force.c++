/*
    Problem: Contains Duplicate
    Link:    https://leetcode.com/problems/contains-duplicate/

    Approach: Brute Force

    Idea:
    Compare every pair (i, j) with i < j. If any values match, a duplicate exists.

    Steps (example [1, 2, 1]):
    1. For each index i from 0 to n-1
    2. For each index j from i+1 to n-1
    3. If nums[i] == nums[j] → return true
    4. If no pair matches → return false

    Time Complexity:  O(n²) — nested loops over the array
    Space Complexity: O(1)  — no extra structures

    Edge Cases:
    - empty array      → false
    - single element   → false
    - all unique       → false
    - duplicate exists → true

    Example: [1, 2, 1] → true

    Note: Likely TLE on LeetCode for large n (e.g. 10⁵) — kept as the honest slow baseline.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = (int)nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
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
