/*
    Problem: Two Sum II — Input Array Is Sorted
    Link:    https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

    Approach: Brute Force

    Idea:
    Ignore the sorted order and try every pair (i, j) with i < j. Return the first pair that sums
    to target, converted to the 1-based indices the problem asks for.

    Steps (example numbers=[2, 7, 11, 15], target=9):
    1. For each i from 0 to n-1
    2. For each j from i+1 to n-1
    3. If numbers[i] + numbers[j] == target → return {i+1, j+1}
    4. Example: 2 + 7 = 9 → [1, 2]

    Time Complexity:  O(n²) — every pair is checked
    Space Complexity: O(1)  — only two indices (meets the "constant extra space" rule)

    Edge Cases:
    - n = 2                   → the only pair is the answer
    - duplicates ([1, 1], 2)  → j starts at i+1, so each element is used once
    - negative values         → plain addition (|value| ≤ 1000, no overflow)

    Example: numbers = [2, 7, 11, 15], target = 9 → [1, 2]

    Note: Indices are 1-based in this problem — the +1 is part of the answer, not a bug.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = (int)numbers.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (numbers[i] + numbers[j] == target) {
                    return {i + 1, j + 1};
                }
            }
        }
        return {};  // unreachable: exactly one answer is guaranteed
    }
};

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> result = solution.twoSum(numbers, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
