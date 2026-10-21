/*
    Problem: Contains Duplicate
    Link:    https://leetcode.com/problems/contains-duplicate/

    Approach: Optimal (hash set)

    Idea:
    Store values seen so far in an unordered_set. Average O(1) lookup — one pass detects repeats.
    Trade O(n) extra space for O(n) time.

    Steps (example [1, 2, 1]):
    1. Create empty set `seen`
    2. For each num in nums
    3. If num is already in seen → return true
    4. Else insert num into seen
    5. If the loop finishes → return false

    Time Complexity:  O(n) average — one pass; set lookup/insert O(1) average
    Space Complexity: O(n)         — up to all unique elements in the set

    Edge Cases:
    - empty array      → false
    - single element   → false
    - all unique       → false (set size = n)
    - duplicate exists → true as soon as the repeat is seen

    Example: [1, 2, 1] → true
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        seen.reserve(nums.size());

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
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
