/*
    Problem: Longest Consecutive Sequence
    Link:    https://leetcode.com/problems/longest-consecutive-sequence/

    Approach: Optimal (hash set + start only at run beginnings)

    Idea:
    Put every value in an unordered_set. A value x starts a run only if x-1 is NOT in the set; only
    then walk x+1, x+2, … while they exist. Each value is walked over at most once in total, so the
    whole algorithm is linear even though it has a nested loop.

    Steps (example nums=[100, 4, 200, 1, 3, 2]):
    1. values = {100, 4, 200, 1, 3, 2}
    2. For each x in values:
       - x-1 in values? → not a start, skip   (4, 3, 2 are skipped)
       - else length = 1; while x+length in values: length++
    3. Starts: 100 (length 1), 200 (length 1), 1 (2, 3, 4 → length 4)
    4. best = 4

    Time Complexity:  O(n) average — each value enters the inner walk at most once (+ set build)
    Space Complexity: O(n)         — the set

    Edge Cases:
    - empty array        → 0
    - all duplicates ([7, 7, 7]) → set {7} → 1
    - negative runs ([-2, -1, 0]) → start at -2 → 3

    Example: nums = [100, 4, 200, 1, 3, 2] → 4

    Note: Iterate the SET, not nums — with many duplicates, iterating nums would re-walk the same run.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> values(nums.begin(), nums.end());

        int best = 0;
        for (int x : values) {
            if (values.count(x - 1)) {
                continue;  // x is inside a run, not its start
            }
            int length = 1;
            while (values.count(x + length)) {
                length++;
            }
            best = max(best, length);
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
